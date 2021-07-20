/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:43:03 by jekim             #+#    #+#             */
/*   Updated: 2021/07/20 17:39:33 by jekim            ###   ########seoul.kr  */
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

int fn_push_swap_o5(t_bucket *data)
{
	return (data->count);
}

int	fn_push_swap(t_bucket *data)
{
	// stack 이 정렬되어 있는지는 여기에서 체크한다. 이 이후에 스텍이 정렬되어 있는지는 고려하지 말 것.
	if (data->size != 1 && !ps_stack_issorted(data->a))
	{
		if (data->size > 1 && data->size <= 3)
			fn_push_swap_t3(data);
		else if (data->size > 3 && data->size <= 5)
			fn_push_swap_t5(data);
		else
			fn_push_swap_o5(data);
	}
	return (data->count);
}