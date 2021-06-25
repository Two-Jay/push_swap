/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:19:13 by jekim             #+#    #+#             */
/*   Updated: 2021/06/25 23:29:55 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"
#include <stdio.h>

int		ps_dlstprint(t_stack *stack)
{
	int		ix;
	t_dlst	*ptr;

	ix = 0;
	if (!stack)
		return (EXIT_FAILURE);
	ptr = stack->top;
	while (ix < stack->size)
	{
		printf("%d번째 노드 value == [%d]\n", ix, ptr->value);
		ptr = ptr->next;
		ix++;
	}
	return (EXIT_SUCCESS);
}
