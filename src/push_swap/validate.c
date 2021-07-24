/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 01:04:55 by jekim             #+#    #+#             */
/*   Updated: 2021/07/24 23:09:53 by jekim            ###   ########seoul.kr  */
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

static int fn_fill_stack(t_bucket *data)
{
	int ix;
	int value;
	int rank;

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


static int fn_fill_arr(t_bucket *data)
{
	int ix;
	int err_flag;

	ix = 0;
	err_flag = 0;
	while (ix < data->arg_size)
	{
		err_flag = ft_isable_strtonbr(data->input_arr_str[ix]);
		if (!err_flag)
			data->input_arr[ix] = ft_atoi_covf(data->input_arr_str[ix], &err_flag);
		if (err_flag)
			ft_strerr("Error : an invalid param\n");
		ix++;
	}
	fn_bubblesort(data->input_arr, data->arg_size);
	return (0);
}

static int		ft_count_word(const char *src, char c)
{
	unsigned int	count;

	count = 0;
	while (*src)
	{
		if (*src != c && *(src + 1) == c)
			count++;
		if (*src != c && !*(src + 1))
			count++;
		src++;
	}
	return (count);
}

int fn_check_bucket_size(char **bucket)
{
	int ix;

	ix = 0;
	while (bucket[ix] && ft_strlen(bucket[ix]))
		ix++;
	return (ix);
}

void fn_check_setting_type(int argc, char **argv, t_bucket *data)
{
	int count;

	count = ft_count_word(argv[1], ' ');
	if (count > 1 && argc == 2)
	{
		data->arg_type = STR_ARG;
		data->input_arr_str = ft_split(argv[1], ' ');
		if (!data->input_arr_str)
			exit(EXIT_FAILURE);
		data->arg_size = fn_check_bucket_size(data->input_arr_str);
		data->input_arr = (int *)ft_calloc(sizeof(int), data->arg_size);
	}
	else
	{
		data->arg_type = NUM_ARG;
		data->input_arr_str = argv;
		data->input_arr_str++;
		data->input_arr = (int *)ft_calloc(sizeof(int), argc - 1);
		data->arg_size = argc - 1;
	}
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
		ft_strerr("Error : no parameters\n");
	fn_check_setting_type(argc, argv, data);
	fn_fill_arr(data);
	fn_fill_stack(data);
	return (0);
}
