/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:11:15 by jekim             #+#    #+#             */
/*   Updated: 2021/07/19 08:50:28 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

int		ps_dlstadd_front(t_stack *stack, t_dlst *new_top)
{
	t_dlst	*old_top;
	t_dlst	*old_bottom;

	old_top = stack->top;
	old_bottom = stack->bottom;
	if (!new_top)
		return (EXIT_FAILURE);
	if (stack->size == 0)
	{
		stack->top = new_top;
		stack->bottom = new_top;
		new_top->next = NULL;
		new_top->before = NULL;
		stack->size++;
	}
	else
	{
		new_top->next = old_top;
		new_top->before = old_bottom;
		old_top->before = new_top;
		old_bottom->next = new_top;
		stack->top = new_top;
		stack->size++;
	}
	return (EXIT_SUCCESS);
}
