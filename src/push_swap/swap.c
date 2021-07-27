/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:43:03 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 02:34:00 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	fn_push_swap_t3(t_bucket *data)
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

int	fn_push_swap_t5(t_bucket *data)
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

int	fn_push_swap_t7(t_bucket *data)
{
	int	ix;
	int	limit;

	ix = 0;
	limit = data->size - 2;
	while (++ix < limit)
	{
		fn_findup_by_rank_a(data, ix);
		ps_inst_pb(data, 0);
	}
	fn_push_swap_t3(data);
	while (--ix)
		ps_inst_pa(data, 0);
	return (data->count);
}
