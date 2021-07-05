/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstpop_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:17:49 by jekim             #+#    #+#             */
/*   Updated: 2021/06/25 23:19:45 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

t_dlst	*ps_dlstpop_back(t_stack *stack)
{
	t_dlst	*ret;
	t_dlst	*newbottom;

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
		newbottom = stack->bottom->before;
		stack->bottom = newbottom;
		newbottom->next = stack->top;
		ret->next = NULL;
		ret->before = NULL;
	}
	stack->size--;
	return (ret);
}