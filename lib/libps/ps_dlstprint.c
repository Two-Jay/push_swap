/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:19:13 by jekim             #+#    #+#             */
/*   Updated: 2021/07/10 08:19:39 by jekim            ###   ########seoul.kr  */
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
	if (stack->size == 0)
		printf("alarm : the stack is empty");
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
	return (EXIT_SUCCESS);
}
