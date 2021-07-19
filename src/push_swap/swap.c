/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:43:03 by jekim             #+#    #+#             */
/*   Updated: 2021/07/19 20:46:20 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int fn_push_swap_t3(t_bucket *data)
{
	if (data->a->top->value > data->a->top->next->value)
		ps_inst_sa(data);
	if (data->size == 3)
	{
		if (data->a->top->next->value > data->a->top->next->next->value)
			ps_inst_rra(data);
	}
	return (data->count);
}

int fn_push_swap_t5(t_bucket *data)
{
	fn_findup_rank_a(data, 1);
	ps_inst_pb(data);
	fn_findup_rank_a(data, 2);
	ps_inst_pb(data);
	fn_push_swap_t3(data);
	// ps_inst_pa(data);
	// ps_inst_pa(data);
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