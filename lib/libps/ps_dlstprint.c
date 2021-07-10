/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:19:13 by jekim             #+#    #+#             */
/*   Updated: 2021/07/10 09:27:42 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"
#include <stdio.h>

int		ps_dlstprint(t_stack *stack)
{
	int	ix;
	t_dlst	*ptr;

	ix = 0;
	if (!stack)
		return (EXIT_FAILURE);
	if (stack->size == 0 && stack->top == NULL)
		return (printf("\n"));
	ptr = stack->top;
	while (ix < stack->size)
	{
		if (ix == stack->size - 1)
			printf("%d", ptr->value);
		else
			printf("%d ", ptr->value);
		ptr = ptr->next;
		ix++;
	}
	printf("\n");
	return (EXIT_SUCCESS);
}
