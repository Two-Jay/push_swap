/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:10:22 by jekim             #+#    #+#             */
/*   Updated: 2021/05/22 21:16:34 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/dlst.h"

t_dlst	*ft_dlstnew(int value)
{
	t_dlst	*node;

	node = (t_dlst *)malloc(sizeof(t_dlst));
	if (!node)
		return (NULL);
	if (!value)
		node->value = 0;
	else
		node->value = value;
	node->next = NULL;
	node->before = NULL;
	return (node);
}

int		ft_dlstadd_front(t_stack *stack, t_dlst *node)
{
	t_dlst	*tmp;

	if (!node)
		return (EXIT_FAILURE);
	if (stack->size == 0)
	{
		stack->top = node;
		stack->bottom = node;
		node->next = node;
		node->before = node;
		stack->size++;
	}
	else
	{
		tmp = stack->top;
		stack->top = node;
		stack->bottom->next = node;
		node->next = tmp;
		tmp->before = node;
		node->before = stack->bottom;
		stack->size++;
	}
	return (EXIT_SUCCESS);
}

int		ft_dlstadd_back(t_stack *stack, t_dlst *node)
{
	t_dlst	*tmp;

	if (!node)
		return (EXIT_FAILURE);
	if (stack->size == 0)
	{
		stack->top = node;
		stack->bottom = node;
		node->next = node;
		node->before = node;
		stack->size++;
	}
	else
	{
		tmp = stack->bottom;
		stack->bottom = node;
		stack->top->before = node;
		node->next = stack->top;
		node->before = tmp;
		tmp->next = node;
		stack->size++;
	}
	return (EXIT_SUCCESS);
}

t_dlst	*ft_dlstpop_front(t_stack *stack)
{
	t_dlst	*ret;
	t_dlst	*newtop;

	if (!stack || stack->size == 0)
		return (NULL);
	if (stack->size == 1)
	{
		ret = stack->top;
		ret->next = NULL;
		ret->before = NULL;
		stack->top = NULL;
		stack->bottom = NULL;
	}
	else
	{
		ret = stack->top;
		newtop = stack->top->next;
		stack->top = newtop;
		newtop->before = stack->bottom;
		ret->next = NULL;
		ret->before = NULL;
	}
	stack->size--;
	return (ret);
}

t_dlst	*ft_dlstpop_back(t_stack *stack)
{
	t_dlst	*ret;
	t_dlst	*newbottom;

	if (!stack || stack->size == 0)
		return (NULL);
	if (stack->size == 1)
	{
		ret = stack->top;
		ret->next = NULL;
		ret->before = NULL;
		stack->top = NULL;
		stack->bottom = NULL;
	}
	else
	{
		ret = stack->bottom;
		newbottom = stack->bottom->before;
		stack->bottom = newbottom;
		newbottom->next = stack->top;
		ret->next = NULL;
		ret->before = NULL;
	}
	stack->size--;
	return (ret);
}
