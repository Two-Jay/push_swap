/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:11:49 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 19:16:53 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

int		ps_dlstadd_back(t_stack *stack, t_dlst *node)
{
	t_dlst	*tmp;

	if (!node)
		return (EXIT_FAILURE);
	if (stack->size == 0)
	{
		stack->top = node;
		stack->bottom = node;
		node->next = node;
		node->before = node;
		stack->size++;
	}
	else
	{
		tmp = stack->bottom;
		stack->bottom = node;
		stack->top->before = node;
		node->next = stack->top;
		node->before = tmp;
		tmp->next = node;
		stack->size++;
	}
	return (EXIT_SUCCESS);
}