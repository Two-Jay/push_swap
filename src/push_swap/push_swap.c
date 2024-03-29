/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/09/05 01:30:48 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	fn_validate_input(int argc, char **argv, t_bucket *data)
{
	if (argc == 1)
		return (exit(EXIT_SUCCESS));
	fn_set_argv(argc, argv, data);
	fn_fill_arr(data);
	fn_fill_stack(data);
}

int	fn_push_swap(t_bucket *data)
{
	if (data->size != 1 && !ps_stack_issorted_asc(data->a))
	{
		if (data->size > 1 && data->size <= 3)
			fn_push_swap_t3(data);
		else if (data->size > 3 && data->size <= 5)
			fn_push_swap_t5(data);
		else if (data->size > 5 && data->size <= 7)
			fn_push_swap_t7(data);
		else if (data->size > 7 && data->size <= 100)
			fn_push_swap_t100(data, 5, 20);
		else
			fn_push_swap_o100(data, 20, 40);
	}
	return (data->count);
}

void	fn_clear_memory(t_bucket *data)
{
	int	ix;

	ix = 0;
	if (data->a->size > 0)
		ps_dlstclear(data->a);
	if (data->b->size > 0)
		ps_dlstclear(data->b);
	free(data->b);
	free(data->a);
	free(data->input_arr);
	while (data->input_arr_str[ix])
		free(data->input_arr_str[ix++]);
	free(data->input_arr_str);
	free(data);
}

int	main(int argc, char **argv)
{
	t_bucket	*data;

	data = ps_bucketnew();
	fn_validate_input(argc, argv, data);
	fn_push_swap(data);
	fn_clear_memory(data);
	return (0);
}
