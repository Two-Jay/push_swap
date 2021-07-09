/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:19:13 by jekim             #+#    #+#             */
/*   Updated: 2021/07/08 12:25:05 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"
#include <stdio.h>

int		ps_dlstprint(t_stack *stack)
{
	size_t	ix;
	t_dlst	*ptr;

	ix = 0;
	if (!stack)
		return (EXIT_FAILURE);
	if (stack->size == 0)
		printf("alarm : the stack is empty")
	ptr = stack->top;
	while (ix < stack->size)
	{
		printf("%zu번째 노드 value == [%d]\n", ix, ptr->value);
		ptr = ptr->next;
		ix++;
	}
	return (EXIT_SUCCESS);
}
