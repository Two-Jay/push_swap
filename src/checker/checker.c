/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/22 05:13:43 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

void fn_print_stack(t_bucket *data, int flag)
{
	if (flag == 1)
		printf("===== before ===\n");
	if (flag == 2)
		printf("===== after ===\n");
	printf("A : ");
	ps_dlstprint(data->a);
	printf("B : ");
	ps_dlstprint(data->b);
	if (flag == 2)
		printf("result : [%d]\n", data->count);
}

int fn_check_command(t_bucket *data, char *line)
{
	if (ft_strequel("pa", line))
		ps_inst_pa(data);
	else if (ft_strequel("pb", line))
		ps_inst_pb(data);
	else if (ft_strequel("ra", line))
		ps_inst_ra(data);
	else if (ft_strequel("rb", line))
		ps_inst_rb(data);
	else if (ft_strequel("rr", line))
		ps_inst_rr(data);
	else if (ft_strequel("sa", line))
		ps_inst_sa(data);
	else if (ft_strequel("sb", line))
		ps_inst_sb(data);
	else if (ft_strequel("ss", line))
		ps_inst_ss(data);
	else if (ft_strequel("rra", line))
		ps_inst_rra(data);
	else if (ft_strequel("rrb", line))
		ps_inst_rrb(data);
	else if (ft_strequel("rrr", line))
		ps_inst_rrr(data);
	else
		return (1);
	return (0);
}

void fn_check_sorting(t_bucket *data)
{
	if (ps_stack_issorted(data->a))
		printf("OK\n");
	else
		printf("KO\n");
	fn_print_stack(data, 2);
}

int fn_read_inputcommand(t_bucket *data)
{
	char *line;
	int	err_flag;

	err_flag = 0;
	while (ft_strgnl(0, &line))
	{
		err_flag = fn_check_command(data, line);
		if (err_flag)
			ft_strerr("Error\n");
		free(line);
	}
	return (0);
}

int main(int argc, char **argv)
{
	t_bucket *data;

	data = ps_bucketnew(argc - 1);
	fn_validate_input(argc, argv, data);
	fn_read_inputcommand(data);
	fn_check_sorting(data);
	return (data->count);
}