/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstpop_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:16:56 by jekim             #+#    #+#             */
/*   Updated: 2021/07/17 17:49:41 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

t_dlst	*ps_dlstpop_front(t_stack *stack)
{
	t_dlst	*ret;

	if (!stack || stack->size == 0)
		return (NULL);
	if (stack->size == 1)
	{
		ret = stack->top;
		stack->top = NULL;
		stack->bottom = NULL;
	}
	else
	{
		ret = stack->top;
		stack->top = ret->next;
		stack->bottom = ret->before;
		stack->top->before = stack->bottom;
		stack->bottom->next = stack->top;
	}
	ret->ix = 0;
	ret->next = NULL;
	ret->before = NULL;
	stack->size--;
	return (ret);
}
