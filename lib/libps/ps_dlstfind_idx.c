/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstfind_idx.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 22:54:25 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 02:41:42 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

/*
** search node's index in dlst by rank
** especially in push_swap project, rra_flag is used for 
*/

int	ps_dlstfind_idx(t_stack *stack, int rank, int *rra_flag)
{
	int		ix;
	t_dlst	*nptr;

	if (stack->size == 0 || rank < 0 || !stack->top)
		return (-1);
	ix = 0;
	*rra_flag = 0;
	nptr = stack->top;
	while (ix < stack->size)
	{
		if (*rra_flag == 0 && ix > (stack->size / 2) - (stack->size % 2))
			*rra_flag = 1;
		if (nptr->rank == rank)
			return (ix);
		nptr = nptr->next;
		ix++;
	}
	return (-1);
}
