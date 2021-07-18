/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:43:03 by jekim             #+#    #+#             */
/*   Updated: 2021/07/19 07:02:30 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int fn_push_swap_t3(t_bucket *data)
{
	if (data->size == 2 && data->a->top->value > data->a->top->next->value)
		ps_inst_sa(data);
	else
	{
		fn_findup_rank_a(data, 1);
		ps_inst_pb(data);
		if (data->a->top->value > data->a->top->next->value)
			ps_inst_sa(data);
		ps_inst_pa(data);
	}
	return (data->count);
}

int fn_push_swap_t5(t_bucket *data)
{
	fn_findup_rank_a(data, 1);
	printf("%d\n", data->count);
	// ps_inst_pb(data);
	// printf("%d\n", data->count);
	// fn_findup_rank_a(data, 2);
	// printf("%d\n", data->count);
	// ps_inst_pb(data);
	// printf("%d\n", data->count);
	// fn_push_swap_t3(data);
	// printf("%d\n", data->count);
	// ps_inst_pa(data);
	// printf("%d\n", data->count);
	// ps_inst_pa(data);
	// printf("%d\n", data->count);
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