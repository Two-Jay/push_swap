/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 01:04:55 by jekim             #+#    #+#             */
/*   Updated: 2021/07/23 12:50:12 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	fn_check_dupvalue(int value, t_stack *stack)
{
	int ix;
	t_dlst *ptr;
	
	ix = 0;
	ptr = stack->top;
	while (stack->size && ix < stack->size)
	{
		if (value == ptr->value)
			ft_strerr("Error : duplicated values exist\n");
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
	int i;

	i = 0;
	while (i < size)
	{
		if (value == arr[i])
			return (i + 1);
		i++;
	}
	return (-1);
}

static void	fn_insert_node(int value, int rank, t_bucket *data)
{
	t_dlst *node;

	node = ps_dlstnew(value);
	node->rank = rank;
	ps_dlstadd_back(data->a, node);
	data->size++;
}

static int fn_fill_stack(int arg_size, char **bucket, t_bucket *data)
{
	int ix;
	int value;
	int rank;

	ix = 0;
	rank = 0;
	value = 0;
	while (ix < arg_size)
	{
		value = ft_atoi(bucket[ix]);
		rank = fn_find_value(value, data->input_arr, arg_size);
		if (rank != -1 && !fn_check_dupvalue(value, data->a))
			fn_insert_node(value, rank, data);
		ix++;
	}
	return (0);
}

int fn_check_bucket_size(char **bucket)
{
	int ix;

	ix = 0;
	while (bucket[ix] && ft_strlen(bucket[ix]))
		ix++;
	return (ix);
}

static int fn_fill_arr(int arg_size, char **bucket, t_bucket *data)
{
	int ix;
	int err_flag;

	ix = 0;
	err_flag = 0;
	data->input_arr = (int *)ft_calloc(sizeof(int), arg_size);
	while (ix < arg_size)
	{
		err_flag = ft_isable_strtonbr(bucket[ix]);
		if (!err_flag)
			data->input_arr[ix] = ft_atoi_covf(bucket[ix], &err_flag);
		if (err_flag)
			ft_strerr("Error : an invalid param\n");
		ix++;
	}
	fn_bubblesort(data->input_arr, arg_size);
	return (0);
}

int fn_validate_input(int argc, char **argv, t_bucket *data)
{
	int	ix;
	int value;
	int	err_flag;
	char **bucket;
	int arg_size;

	bucket = ft_split(argv[1], ' ');
	if (!bucket)
		exit(EXIT_FAILURE);
	arg_size = fn_check_bucket_size(bucket);
	ix = 0;
	value = 0;
	err_flag = 0;
	if (argc == 1)
		ft_strerr("Error : no parameters\n");
	fn_fill_arr(arg_size, bucket, data);
	fn_fill_stack(arg_size, bucket, data);
	return (0);
}
