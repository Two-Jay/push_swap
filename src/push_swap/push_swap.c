/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/08 12:22:38 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include <stdio.h>

t_data	*ps_bucketnew(void)
{
	t_data	*data;
	t_stack	*a;
	t_stack	*b;

	data = (t_data *)ft_calloc(1, sizeof(t_data));
	if (!data)
		exit(EXIT_FAILURE);
	a = (t_stack *)ft_calloc(1, sizeof(t_stack));
	b = (t_stack *)ft_calloc(1, sizeof(t_stack));
	if (!a || !b)
		exit(EXIT_FAILURE);
	data->a = a;
	data->b = b;
	return (data);
}

// checked!
int ft_validate_input(int argc, char **argv, t_data *data)
{
	int	ix;
	int	err_flag;

	ix = 0;
	if (argc == 1)
	ft_strerr("Error\n : a few parameters\n");
	data->input_arr = (int *)ft_calloc(sizeof(int), argc - 1);
	if (!data->input_arr)
		ft_strerr("Error\n:No memory");
	err_flag = 0;
	while (ix < argc - 1)
	{
		err_flag = ft_isable_strtonbr(argv[ix + 1]);
		if (!err_flag)
			data->input_arr[ix] = ft_atoi_covf(argv[ix + 1], &err_flag); // arr에 넣어 준 이후에, 노드 생성하고 A 스텍에 넣기			
		if (err_flag)
			ft_strerr("Error\n: an invalid param");
		ix++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	t_data *data;

	data = ps_bucketnew();
	ft_validate_input(argc, argv, data);
	return (0);
}