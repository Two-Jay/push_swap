/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_indexOf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 02:42:57 by jekim             #+#    #+#             */
/*   Updated: 2021/07/25 03:20:35 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

int	ps_indexOf(t_stack *stack, int rank)
{
	int ix;
	t_dlst *nptr;
	
	ix = 0;
	nptr = stack->top;
	while (nptr != NULL && ix < stack->size)
	{
		if (nptr->rank == rank)
			return (ix);
		else
			nptr = nptr->next;
		ix++;
	}
	return (-1);
}