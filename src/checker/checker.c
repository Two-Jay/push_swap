/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 11:39:38 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

int	fn_check_command(t_bucket *data, char *line)
{
	if (ft_strequel("pa", line))
		ps_inst_pa(data, 1);
	else if (ft_strequel("pb", line))
		ps_inst_pb(data, 1);
	else if (ft_strequel("ra", line))
		ps_inst_ra(data, 0, 1);
	else if (ft_strequel("rb", line))
		ps_inst_rb(data, 0, 1);
	else if (ft_strequel("rr", line))
		ps_inst_rr(data, 1);
	else if (ft_strequel("sa", line))
		ps_inst_sa(data, 0, 1);
	else if (ft_strequel("sb", line))
		ps_inst_sb(data, 0, 1);
	else if (ft_strequel("ss", line))
		ps_inst_ss(data, 1);
	else if (ft_strequel("rra", line))
		ps_inst_rra(data, 0, 1);
	else if (ft_strequel("rrb", line))
		ps_inst_rrb(data, 0, 1);
	else if (ft_strequel("rrr", line))
		ps_inst_rrr(data, 1);
	else
		return (1);
	return (0);
}

void	fn_check_sorting(t_bucket *data)
{
	if (ps_stack_issorted_asc(data->a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int	fn_read_inputcommand(t_bucket *data)
{
	char	*line;
	int		err_flag;

	err_flag = 0;
	while (ft_strgnl(0, &line))
	{
		err_flag = fn_check_command(data, line);
		if (err_flag)
			ft_strerr("Error\n");
		free(line);
	}
	free(line);
	return (0);
}

void	fn_validate_input(int argc, char **argv, t_bucket *data)
{
	int	ix;
	int	value;
	int	err_flag;

	ix = 0;
	value = 0;
	err_flag = 0;
	if (argc == 1)
		return (exit(EXIT_SUCCESS));
	fn_check_setting_type(argc, argv, data);
	fn_fill_arr(data);
	fn_fill_stack(data);
}

int	main(int argc, char **argv)
{
	t_bucket	*data;

	data = ps_bucketnew();
	fn_validate_input(argc, argv, data);
	fn_read_inputcommand(data);
	fn_check_sorting(data);
	fn_clear_memory(data);
	return (0);
}
