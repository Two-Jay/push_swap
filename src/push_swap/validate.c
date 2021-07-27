/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 01:04:55 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 04:04:28 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	fn_check_dupvalue(int value, t_stack *stack)
{
	int		ix;
	t_dlst	*ptr;

	ix = 0;
	ptr = stack->top;
	while (stack->size && ix < stack->size)
	{
		if (value == ptr->value)
			ft_strerr("Error\n");
		else
		{
			ptr = ptr->next;
			ix++;
		}
	}
	return (0);
}

static int	fn_find_value(int value, int *arr, int size)
{
	int	ix;

	ix = 0;
	while (ix < size)
	{
		if (value == arr[ix])
			return (ix + 1);
		ix++;
	}
	return (-1);
}

static void	fn_insert_node(int value, int rank, t_bucket *data)
{
	t_dlst	*node;

	node = ps_dlstnew(value);
	node->rank = rank;
	ps_dlstadd_back(data->a, node);
	data->size++;
}

int	fn_fill_stack(t_bucket *data)
{
	int	ix;
	int	value;
	int	rank;

	ix = 0;
	rank = 0;
	value = 0;
	while (ix < data->arg_size)
	{
		value = ft_atoi(data->input_arr_str[ix]);
		rank = fn_find_value(value, data->input_arr, data->arg_size);
		if (rank != -1 && !fn_check_dupvalue(value, data->a))
			fn_insert_node(value, rank, data);
		ix++;
	}
	return (0);
}

int	fn_fill_arr(t_bucket *data)
{
	int	ix;
	int	err_flag;

	ix = 0;
	err_flag = 0;
	while (ix < data->arg_size)
	{
		err_flag = ft_isable_strtonbr(data->input_arr_str[ix]);
		if (!err_flag)
			data->input_arr[ix] = ft_atoi_covf(data->input_arr_str[ix], 
					&err_flag);
		if (err_flag)
			ft_strerr("Error\n");
		ix++;
	}
	fn_bubblesort(data->input_arr, data->arg_size);
	return (0);
}
