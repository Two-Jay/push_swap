/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:10:22 by jekim             #+#    #+#             */
/*   Updated: 2021/05/21 19:26:28 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/dlst.h"

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

//ok
int				ft_dlstadd_front(t_stack *stack, int value)
{
	t_dlst *node;
	t_dlst *tmp;
	
	node = ft_dlstnew(value);
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

//ok
int				ft_dlstadd_back(t_stack *stack, int value)
{
	t_dlst *node;
	t_dlst *tmp;
	
	node = ft_dlstnew(value);
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

//ok
t_dlst			*ft_dlstpop_front(t_stack *stack)
{
	t_dlst *ret;
	t_dlst *newtop;

	if (!stack || stack->size == 0)
		return (NULL);
	if (stack->size == 1)
	{
		ret = stack->top;
		ret->next = NULL;
		ret->before = NULL;
		stack->top = NULL;
		stack->bottom = NULL;
		stack->size--;
		return (ret);
	}
	else
	{
		ret = stack->top;
		newtop = stack->top->next;
		stack->top = newtop;
		newtop->before = stack->bottom;
		ret->next = NULL;
		ret->before = NULL;
		stack->size--;
		return (ret);
	}
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

//ok
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

//ok
int ft_dlstprint(t_stack *stack)
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

int main(void)
{
	t_bucket *bucket = ft_init_bucket();
	t_dlst	*node;
	int value = 0;

	ft_dlstadd_back(bucket->A, value++);
	ft_dlstadd_back(bucket->A, value++);
	ft_dlstadd_back(bucket->A, value);
	ft_dlstprint(bucket->A);
	return (EXIT_SUCCESS);
}

