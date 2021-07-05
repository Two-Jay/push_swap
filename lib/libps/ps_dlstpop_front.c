/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstpop_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:16:56 by jekim             #+#    #+#             */
/*   Updated: 2021/06/25 23:17:20 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

t_dlst	*ps_dlstpop_front(t_stack *stack)
{
	t_dlst	*ret;
	t_dlst	*newtop;

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
		ret = stack->top;
		newtop = stack->top->next;
		stack->top = newtop;
		newtop->before = stack->bottom;
		ret->next = NULL;
		ret->before = NULL;
	}
	stack->size--;
	return (ret);
}
