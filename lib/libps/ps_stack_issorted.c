/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_issorted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:11:12 by jekim             #+#    #+#             */
/*   Updated: 2021/07/16 01:20:46 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

int	ps_stack_issorted(t_stack *stack)
{
	int ix;
	int flag;
	t_dlst *nptr;

	ix = 0;
	flag = 1;
	nptr = stack->top;
	while (ix < stack->size - 1)
	{
		if (nptr->value > nptr->next->value)
		{
			flag = 0;
			break;
		}
		nptr = nptr->next;
		ix++;
	}
	return (flag);
}
