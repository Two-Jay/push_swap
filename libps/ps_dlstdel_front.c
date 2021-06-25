/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstdel_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:26:47 by jekim             #+#    #+#             */
/*   Updated: 2021/06/25 23:27:07 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

int		ps_dlstdel_front(t_stack *stack)
{
	t_dlst	*ptr;
	int		value;
	
	if (stack->size == 0)
		return ;
	ptr = stack->top->next;
	value = stack->top->value;
	free(stack->top);
	stack->top = ptr;
	stack->size--;
	return (value);
}