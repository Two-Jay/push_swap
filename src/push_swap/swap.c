/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:43:03 by jekim             #+#    #+#             */
/*   Updated: 2021/07/23 09:29:26 by jekim            ###   ########seoul.kr  */
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
	limit = data->size - 2;
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

int fn_push_swap_t100(t_bucket *data)
{
	int ix;
	int pb_count;
	int chunk;
	t_dlst *nptr;

	ix = 1;
	pb_count = 0;
	chunk = 1;
	nptr = data->a->top;
	printf("size = [%d]\n", data->size);
	fn_print_stack(data, 1);
	while (data->a->size != 0)
	{
		if (nptr->rank >= 1 + (CHUNK_SIZE * (chunk - 1)) && nptr->rank <= (CHUNK_SIZE * chunk))
		{
			fn_findup_by_rank_a(data, nptr->rank);
			ps_inst_pb(data);
			pb_count++;
			nptr = data->a->top;
		}
		else
			nptr = nptr->next;
		if (pb_count == CHUNK_SIZE)
		{
			pb_count = 0;
			chunk++;
		}
	}
	return (data->count);
}

int fn_push_swap_o100(t_bucket *data)
{
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
		else if (data->size > 7 && data->size <= 100)
			fn_push_swap_t100(data);
		else
			fn_push_swap_o100(data);
	}
	return (data->count);
}