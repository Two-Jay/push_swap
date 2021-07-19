/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstpop_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:17:49 by jekim             #+#    #+#             */
/*   Updated: 2021/07/19 07:36:23 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

t_dlst	*ps_dlstpop_back(t_stack *stack)
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
		ret = stack->bottom;
		stack->top = ret->next;
		stack->bottom = ret->before;
		stack->bottom->next = stack->top;
		stack->top->before = stack->bottom;
	}
	ret->next = NULL;
	ret->before = NULL;
	stack->size--;
	return (ret);
}
