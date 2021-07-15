/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstpop_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:17:49 by jekim             #+#    #+#             */
/*   Updated: 2021/07/15 14:09:33 by jekim            ###   ########seoul.kr  */
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
		ret->next = NULL;
		ret->before = NULL;
		stack->top = NULL;
		stack->bottom = NULL;
	}
	else
	{
		ret = stack->bottom;
		stack->bottom = stack->bottom->before;
		stack->top->before	= stack->bottom;
		ret->next = NULL;
		ret->before = NULL;
	}
	stack->size--;
	return (ret);
}