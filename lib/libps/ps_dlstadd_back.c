/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:11:49 by jekim             #+#    #+#             */
/*   Updated: 2021/07/16 22:49:33 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

int		ps_dlstadd_back(t_stack *stack, t_dlst *new_bottom)
{
	t_dlst	*old_bottom;
	t_dlst 	*old_top;

	if (!new_bottom)
		return (EXIT_FAILURE);
	if (stack->size == 0)
	{
		stack->top = new_bottom;
		stack->bottom = new_bottom;
		new_bottom->next = NULL;
		new_bottom->before = NULL;
		stack->size++;
	}
	else
	{
		old_bottom = stack->bottom;
		old_top = stack->top;

		new_bottom->next = old_top;
		new_bottom->before = old_bottom;
		old_bottom->next = new_bottom;
		old_top->before = new_bottom;
		stack->bottom = new_bottom;
		stack->size++;
	}
	return (EXIT_SUCCESS);
}