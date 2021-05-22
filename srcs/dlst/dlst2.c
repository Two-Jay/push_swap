/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:02:44 by jekim             #+#    #+#             */
/*   Updated: 2021/05/23 00:10:48 by jekim            ###   ########.fr       */
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

int		ft_dlstswap_next(t_dlst *node)
{
	t_dlst *ptr_next;
	
	ptr_next = node->next;
	node->before->next = ptr_next;
	
}


o
1
2
o




int		ft_dlstdel_front(t_stack *stack)
{
	t_dlst	*ptr;
	int		value;
	
	if (stack->size == 0)
		return ;
	ptr = stack->top->next;
	value = stack->top->value;
	free(stack->top);
	stack->top = ptr;
	stack->size--;
	return (value);
}

int		ft_dlstclear(t_stack *stack)
{
	int ix;

	ix = 0;
	while (ix < stack->size)
		ft_dlstdel_front(stack);
	return (EXIT_SUCCESS);
}