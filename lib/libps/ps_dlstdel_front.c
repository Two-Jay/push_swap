/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstdel_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:26:47 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 02:41:36 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

int	ps_dlstdel_front(t_stack *stack)
{
	t_dlst	*ptr;

	if (stack->size == 0)
		return (0);
	ptr = stack->top->next;
	free(stack->top);
	if (stack->size == 1)
		stack->top = NULL;
	else
		stack->top = ptr;
	stack->size--;
	return (1);
}
