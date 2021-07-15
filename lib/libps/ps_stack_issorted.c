/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_issorted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:11:12 by jekim             #+#    #+#             */
/*   Updated: 2021/07/15 17:19:53 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

int	ps_stack_issorted(t_stack *stack)
{
	int ix;
	int flag;
	t_dlst *nptr;

	ix = 0;
	flag = 0;
	nptr = stack->top;
	while (ix < stack->size - 1)
	{
		if (nptr->value > nptr->next->value)
		{
			flag = 1;
			break;
		}
		nptr = nptr->next;
		ix++;
	}
	return (flag);
}
