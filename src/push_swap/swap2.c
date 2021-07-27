/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 06:54:36 by jekim             #+#    #+#             */
/*   Updated: 2021/07/27 08:18:49 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


void fn_sweep_value_into_chunk(t_bucket *data, int chunk_size, int chunk_nbr)
{
	int hold_first;
	int hold_second;
	
	if (data->a->size == 0)
		return ;
	else
	{
		hold_first = find_node_chunk(data, 1 + (chunk_size * chunk_nbr),
				chunk_size * (chunk_nbr + 1), 1);
		hold_second = find_node_chunk(data, 1 + (chunk_size * chunk_nbr),
				chunk_size * (chunk_nbr + 1), -1);
		if (hold_first <= hold_second)
			fn_findup_by_index_a(data, hold_first, 1);
		else if (hold_first > hold_second)
			fn_findup_by_index_a(data, hold_second, -1);
	}
}

void fn_put_front_lowest_atop_to_b(t_bucket *data)
{
	static int lowest_rank;

	if (data->b->size == 0)
	{
		ps_inst_pb(data, 0);
		lowest_rank = data->b->top->rank;
	}
	if (data->b->size == 1)
	{
		if (data->a->top->rank < data->b->top->rank)
			lowest_rank = data->a->top->rank;
		ps_inst_pb(data, 0);
	}
	else if (data->a->top != NULL)
	{
		while (!(data->a->top->rank < data->b->top->rank) 
			&& !(data->a->top->rank > data->b->bottom->rank))
			ps_inst_rb(data, 0, 0);
		lowest_rank = data->b->top->rank;
		if (data->a->top->rank < data->b->top->rank)
			lowest_rank = data->a->top->rank;
		ps_inst_pb(data, 0);
	}
}


int fn_push_swap_t3_on_b(t_bucket *data)
{
	if (data->b->size >= 3 && !ps_stack_issorted_asc(data->b))
	{
		if ((data->b->top->value < data->b->top->next->next->value 
		&& data->b->top->value < data->b->top->next->value))
		{
			ps_inst_rrb(data, 0, 0);
			ps_inst_sb(data, 0, 0);
		}
		if (data->b->top->value > data->b->top->next->next->value 
		&& data->b->top->value > data->b->top->next->value)
			ps_inst_rb(data, 0, 0);
		if (data->b->top->value > data->b->top->next->next->value)
			ps_inst_rrb(data, 0, 0);
		if (data->b->top->value > data->b->top->next->value)
			ps_inst_sb(data, 0, 0);
	}
	return (data->count);
}