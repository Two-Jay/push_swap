/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:10:22 by jekim             #+#    #+#             */
/*   Updated: 2021/05/18 21:50:21 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/dlst.h"

void	ft_dlstadd_front(t_stack *stack, t_dlst *newnode)
{
	t_dlst *tmp;

	tmp = 0;
	if (!stack || !newnode)
		return ;
	
	stack->top->next = newnode;
}

t_dlst	*ft_dlstnew(void *value)
{
	t_dlst	*node;
	
	node = (t_dlst *)malloc(sizeof(t_dlst));
	if (!node)
		return (NULL);
	if (!value)
		node->value = NULL;
	else
		node->value = value;
	node->next = NULL;
	node->before = NULL;
	return (node);
}