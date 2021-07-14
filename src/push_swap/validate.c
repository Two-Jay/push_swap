/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 01:04:55 by jekim             #+#    #+#             */
/*   Updated: 2021/07/14 14:29:28 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	fn_check_dupvalue(int value, t_stack *stack)
{
	int ix;
	t_dlst *ptr;
	
	ix = 0;
	ptr = stack->top;
	while (ix < stack->size)
	{
		if (value == ptr->value)
			ft_strerr("Error\n duplicated values exist");
		else
		{
			ptr = ptr->next;
			ix++;
		}
	}
	return (0);
}

static void	fn_insert_node(int value, int ix, t_bucket *data)
{
	t_dlst *node;

	node = ps_dlstnew(value);
	ps_dlstadd_back(data->a, node);
	data->input_arr[ix] = value;
	data->size++;
}

int fn_validate_input(int argc, char **argv, t_bucket *data)
{
	int	ix;
	int value;
	int	err_flag;

	ix = 0;
	value = 0;
	err_flag = 0;
	if (argc == 1)
		ft_strerr("Error\n : a few parameters\n");
	while (ix < argc - 1)
	{
		err_flag = ft_isable_strtonbr(argv[ix + 1]);
		if (!err_flag)
		{
			value = ft_atoi_covf(argv[ix + 1], &err_flag);
			fn_check_dupvalue(value, data->a);
			fn_insert_node(value, ix, data);
		}	
		if (err_flag)
			ft_strerr("Error\n: an invalid param");
		ix++;
	}
	return (0);
}
