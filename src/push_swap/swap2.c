/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 06:54:36 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 02:31:43 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	fn_sweep_value_into_chunk(t_bucket *data,
			int chunk_size, int chunk_nbr)
{
	int	hold_first;
	int	hold_second;

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

static void	fn_put_front_lowest_atop_to_b(t_bucket *data)
{
	static int	lowest_rank;

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

int	fn_push_swap_t100(t_bucket *data, int chunk_nbr, int chunk_size)
{
	int	ix;
	int	jx;

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

int	fn_push_swap_o100(t_bucket *data, int chunk_nbr, int chunk_size)
{
	int	ix;
	int	jx;

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
