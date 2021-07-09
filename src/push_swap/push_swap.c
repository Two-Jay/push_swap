/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/10 07:32:18 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include <stdio.h>

t_bucket	*ps_bucketnew(void)
{
	t_bucket	*data;
	t_stack	*a;
	t_stack	*b;

	data = (t_bucket *)ft_calloc(1, sizeof(t_bucket));
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
int ft_validate_input(int argc, char **argv, t_bucket *data);
// duplicated input check, if err return 1, or if not 0
// void	fn_check_dupvalue(int value, t_stack *stack)
// {
	
// }

void	fn_insert_node(char *str, int ix, int *err_flag, t_bucket *data)
{
	t_dlst *node;
	int value;

	value = ft_atoi_covf(str, err_flag);
	node = ps_dlstnew(value);
	ps_dlstadd_back(data->a, node);
	data->input_arr[ix] = value;
	data->size++;
	data->a->size++;
}

int fn_validate_input(int argc, char **argv, t_bucket *data)
{
	int	ix;
	int	err_flag;

	ix = 0;
	err_flag = 0;
	if (argc == 1)
	ft_strerr("Error\n : a few parameters\n");
	data->input_arr = (int *)ft_calloc(sizeof(int), argc - 1);
	if (!data->input_arr)
		ft_strerr("Error\n:No memory");
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
	t_bucket *data;

	data = ps_bucketnew();
	ft_validate_input(argc, argv, data);
	return (0);
}