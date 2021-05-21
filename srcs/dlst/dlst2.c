/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:02:44 by jekim             #+#    #+#             */
/*   Updated: 2021/05/21 20:04:43 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/dlst.h"

t_dlst	*ft_dlstnext(t_dlst *node, unsigned int step)
{
	int		ix;
	t_dlst	*ptr;

	ix = 0;
	ptr = node;
	while (ptr->next && ix < step)
	{
		ptr = ptr->next;
		ix++;
	}
	return (ptr);
}

t_dlst	*ft_dlstback(t_dlst *node, unsigned int step)
{
	int		ix;
	t_dlst	*ptr;

	ix = 0;
	ptr = node;
	while (ptr->before && ix < step)
	{
		ptr = ptr->before;
		ix++;
	}
	return (ptr);
}

int		ft_dlstprint(t_stack *stack)
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
