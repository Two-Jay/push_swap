/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:11:15 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 19:13:58 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

int		ps_dlstadd_front(t_stack *stack, t_dlst *node)
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
		tmp = stack->top;
		stack->top = node;
		stack->bottom->next = node;
		node->next = tmp;
		tmp->before = node;
		node->before = stack->bottom;
		stack->size++;
	}
	return (EXIT_SUCCESS);
}
