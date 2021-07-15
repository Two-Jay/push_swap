/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:43:03 by jekim             #+#    #+#             */
/*   Updated: 2021/07/15 18:04:30 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int fn_push_swap_t3(t_bucket *data)
{
	if (data->size == 2 && data->a->top->value > data->a->top->next->value)
		ps_inst_sa(data);
	return (data->count);
}

int fn_push_swap_t5(t_bucket *data)
{
	return (data->count);
}

int	fn_push_swap(t_bucket *data)
{
	if (data->size == 1 || !ps_stack_issorted(data->a))
		return (data->count);
	else
	{
		if (data->size > 1 && data->size <= 3)
			fn_push_swap_t3(data);
		else if (data->size > 3 && data->size <= 5)
			fn_push_swap_t5(data);
	}
	return (data->count);
}