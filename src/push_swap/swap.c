/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:43:03 by jekim             #+#    #+#             */
/*   Updated: 2021/07/27 08:19:32 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int fn_push_swap_t3(t_bucket *data)
{
	if (data->a->size == 2 && data->a->top->value > data->a->top->next->value)
		ps_inst_sa(data, 0, 0);
	if (data->a->size == 3 && !ps_stack_issorted_asc(data->a))
	{
		if ((data->a->top->value < data->a->bottom->value 
		&& data->a->top->value < data->a->top->next->value))
		{
			ps_inst_rra(data, 0, 0);
			ps_inst_sa(data, 0, 0);
		}
		if (data->a->top->value > data->a->bottom->value 
		&& data->a->top->value > data->a->top->next->value)
			ps_inst_ra(data, 0, 0);
		if (data->a->top->value > data->a->bottom->value)
			ps_inst_rra(data, 0, 0);
		if (data->a->top->value > data->a->top->next->value)
			ps_inst_sa(data, 0, 0);
	}
	return (data->count);
}


int fn_push_swap_t5(t_bucket *data)
{
	fn_findup_by_rank_a(data, 1);
	ps_inst_pb(data, 0);
	fn_findup_by_rank_a(data, 2);
	ps_inst_pb(data, 0);
	fn_push_swap_t3(data);
	ps_inst_pa(data, 0);
	ps_inst_pa(data, 0);
	return (data->count);
}

int fn_push_swap_t7(t_bucket *data)
{
	int i;
	int limit;

	i = 0;
	limit = data->size - 2;
	while (++i < limit)
	{
		fn_findup_by_rank_a(data, i);
		ps_inst_pb(data, 0);
	}
	fn_push_swap_t3(data);
	while (--i)
		ps_inst_pa(data, 0);
	return (data->count);
}


int fn_push_swap_t100(t_bucket *data, int chunk_nbr, int chunk_size)
{
	int ix;
	int jx;

	ix = 0;
	while (ix < chunk_nbr)
	{
		jx = 0;
		while (jx < chunk_size)
		{
			fn_sweep_value_into_chunk(data, chunk_size, ix);
			fn_put_front_lowest_atop_to_b(data);
			jx++;
		}
		ix++;
	}
	ix = data->b->size;
	while (ix--)
	{
		fn_findup_by_rank_b(data, ix);
		ps_inst_pa(data, 0);
	}
	ps_inst_ra(data, 0, 0);
	return (data->count);
}

int fn_push_swap_o100(t_bucket *data, int chunk_nbr, int chunk_size)
{
	int ix;
	int jx;

	ix = 0;
	while (ix < chunk_nbr)
	{
		jx = 0;
		while (jx < chunk_size)
		{
			fn_sweep_value_into_chunk(data, chunk_size, ix);
			fn_put_front_lowest_atop_to_b(data);
			jx++;
		}
		ix++;
	}
	ix = data->b->size;
	while (ix--)
	{
		fn_findup_by_rank_b(data, ix);
		ps_inst_pa(data, 0);
	}
	ps_inst_ra(data, 0, 0);
	return (data->count);
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