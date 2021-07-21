/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:43:03 by jekim             #+#    #+#             */
/*   Updated: 2021/07/22 03:33:22 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int fn_push_swap_t3(t_bucket *data)
{
	if (data->a->size == 2 && data->a->top->value > data->a->top->next->value)
		ps_inst_sa(data);
	if (data->a->size == 3 && !ps_stack_issorted(data->a))
	{
		if ((data->a->top->value < data->a->bottom->value 
		&& data->a->top->value < data->a->top->next->value))
		{
			ps_inst_rra(data);
			ps_inst_sa(data);
		}
		if (data->a->top->value > data->a->bottom->value 
		&& data->a->top->value > data->a->top->next->value)
			ps_inst_ra(data);
		if (data->a->top->value > data->a->bottom->value)
			ps_inst_rra(data);
		if (data->a->top->value > data->a->top->next->value)
			ps_inst_sa(data);
	}
	return (data->count);
}

int fn_push_swap_t5(t_bucket *data)
{
	fn_findup_by_rank_a(data, 1);
	ps_inst_pb(data);
	fn_findup_by_rank_a(data, 2);
	ps_inst_pb(data);
	fn_push_swap_t3(data);
	ps_inst_pa(data);
	ps_inst_pa(data);
	return (data->count);
}

int fn_push_swap_t7(t_bucket *data)
{
	int i;
	int limit;

	i = 0;
	if (data->size == 6)
		limit = 4;
	else
		limit = 5;
	while (++i < limit)
	{
		fn_findup_by_rank_a(data, i);
		ps_inst_pb(data);
	}
	fn_push_swap_t3(data);
	while (--i)
		ps_inst_pa(data);
	return (data->count);
}

int fn_push_swap_o7(t_bucket *data)
{
	int max_idx;
	int min_idx;

	max_idx = data->size - 1;
	min_idx = 0;
	return (data->count);
}

int	fn_push_swap(t_bucket *data)
{
	if (data->size != 1 && !ps_stack_issorted(data->a))
	{
		if (data->size > 1 && data->size <= 3)
			fn_push_swap_t3(data);
		else if (data->size > 3 && data->size <= 5)
			fn_push_swap_t5(data);
		else if (data->size > 5 && data->size <= 7)
			fn_push_swap_t7(data);
		else
			fn_push_swap_o7(data);
	}
	return (data->count);
}