/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:19:13 by jekim             #+#    #+#             */
/*   Updated: 2021/07/08 17:50:49 by jekim            ###   ########.fr       */
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
