/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 06:54:36 by jekim             #+#    #+#             */
/*   Updated: 2021/08/09 19:27:25 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	fn_sweep_value_into_chunk(t_bucket *data,
			int chunk_size, int chunk_nbr)
{
	int	hold_first;
	int	hold_second;

	if (data->a->size == 0)
		return (0);
	else
	{
		hold_first = find_node_chunk(data, 1 + (chunk_size * chunk_nbr),
				chunk_size * (chunk_nbr + 1), 1);
		hold_second = find_node_chunk(data, 1 + (chunk_size * chunk_nbr),
				chunk_size * (chunk_nbr + 1), -1);
		if (hold_first == -1 && hold_second == -1)
			return (0);
		if (hold_first <= hold_second)
			fn_findup_by_index_a(data, hold_first, 1);
		else if (hold_first > hold_second)
			fn_findup_by_index_a(data, hold_second, -1);
	}
	return (1);
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
			ps_inst_pb(data, 0);
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
			ps_inst_pb(data, 0);
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
