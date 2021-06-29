/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:10:22 by jekim             #+#    #+#             */
/*   Updated: 2021/05/23 17:57:13 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/dlst.h"

int				ft_dlstadd_front(t_stack *stack, t_dlst *node)
{
	t_dlst *tmp;

	if (!stack || !node)
		return (EXIT_FAILURE);
	tmp = stack->top;
	if (!tmp)
		tmp = node;
	node->next = tmp;
	node->before = stack->bottom;
	stack->bottom->next = node;
	stack->top = node;
	tmp->before = node;
	stack->size += 1;
	return (EXIT_SUCCESS);
}

int				ft_dlstadd_back(t_stack *stack, t_dlst *node)
{
	t_dlst *tmp;

	tmp = stack->bottom;
	if (!stack || !node)
		return (EXIT_FAILURE);
	node->before = tmp;
	node->next = stack->top;
	stack->top->before = node;
	stack->bottom = node;
	tmp->next = node;
	stack->size += 1;
	return (EXIT_SUCCESS);
}

unsigned int	ft_dlst_idxof(t_stack *stack, int target)
{
	int ix;
	t_dlst	*ptr;
	
	if (!stack)
		return (-1);
	ix = 0;
	ptr = stack->top;
	while (ptr && ix < stack->size)
	{
		if (ptr->value == target)
			return (ix);
		else
		{
			ptr = ptr->next;
			ix++;
		}
	}
	return (-1);
}

t_dlst			*ft_dlstpop_front(t_stack *stack)
{
	t_dlst *ret;
	t_dlst *newtop;
	
	if (!stack || stack->size == 0)
		return (NULL);
	ret = stack->top;
	newtop = stack->top->next;
	stack->top = newtop;
	stack->bottom->next = newtop;
	newtop->before = stack->bottom;
	ret->next = NULL;
	ret->before = NULL;
	stack->size -= 1;
	return (ret);
}

t_dlst			*ft_dlstpop_back(t_stack *stack)
{
	t_dlst	*ret;
	t_dlst	*newbottom;

	if (!stack || stack->size == 0)
		return (NULL);
	ret = stack->bottom;
	newbottom = stack->bottom->before;
	stack->bottom = newbottom;
	stack->top->before = newbottom;
	newbottom->next = stack->top;
	ret->next = NULL;
	ret->before = NULL;
	stack->size -= 1;
	return (ret);
}

t_dlst			*ft_dlstnext(t_dlst *node, unsigned int step)
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

t_dlst			*ft_dlstback(t_dlst *node, unsigned int step)
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

// ok
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


t_bucket	*ft_init_bucket(void)
{
	t_bucket 	*bucket;
	t_stack		*A;
	t_stack		*B;
	
	bucket = (t_bucket *)calloc(1, sizeof(t_bucket));
	if (!bucket)
		return (NULL);
		//return (ft_handle_stderr("bucket init error in _init_bucket_\n"));
	A = (t_stack *)calloc(1, sizeof(t_stack));
	B = (t_stack *)calloc(1, sizeof(t_stack));
	if (!A || !B)
		return (NULL);
		//return (ft_handle_stderr("stack init error in _init_bucket_\n"));
	bucket->A = A;
	bucket->B = B;
	return (bucket);
}

int main(void)
{
	t_bucket *bucket = ft_init_bucket();	
	

}
