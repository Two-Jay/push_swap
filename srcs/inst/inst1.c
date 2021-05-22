/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inst1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:10:55 by jekim             #+#    #+#             */
/*   Updated: 2021/05/23 00:03:23 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/dlst.h"
#include "../../include/push_swap.h"

void	do_sa(t_bucket *bucket)
{
	t_dlst	*ptr1;
	t_dlst	*ptr2;

	if (bucket->a->size < 2)
		return ;
	ptr1 = bucket->a->top;
	ptr2 = bucket->a->top->next;
	bucket->a->top = ptr2;
	ptr1->before = ptr2;
	ptr1->next = ptr2->next;
	ptr2->before = bucket->a->bottom;
	ptr2->next = ptr1;
	bucket->result++;
}

void	do_sb(t_bucket *bucket)
{
	t_dlst	*ptr1;
	t_dlst	*ptr2;

	if (bucket->a->size < 2)
		return ;
	ptr1 = bucket->b->top;
	ptr2 = bucket->b->top->next;
	bucket->b->top = ptr2;
	ptr1->before = ptr2;
	ptr1->next = ptr2->next;
	ptr2->before = bucket->b->bottom;
	ptr2->next = ptr1;
	bucket->result++;
}

void	do_ss(t_bucket *bucket)
{
	do_sa(bucket);
	do_sb(bucket);
	bucket->result--;
}

// pa : push a
// take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
void	do_pa(t_bucket *bucket)
{
	t_dlst	*node;
	
	node = ft_dlstpop_front(bucket->b);
	ft_dlstadd_front(bucket->a, node);
	bucket->result++;
}

// pb : push b
// take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.
void	do_pb(t_bucket *bucket)
{
	t_dlst	*node;
	
	node = ft_dlstpop_front(bucket->a);
	ft_dlstadd_front(bucket->b, node);
	bucket->result++;
}


// ra : rotate a
// shift up all elements of stack a by 1. 
// The first element becomes the last one.
void	do_ra(t_bucket *bucket)
{
	bucket->a->top = ft_dlstback(bucket->a->top, 1);
	bucket->a->bottom = ft_dlstback(bucket->a->bottom, 1);
	bucket->result++;
}

// rb : rotate b
// shift up all elements of stack b by 1.
// The first element becomes the last one.
void	do_rb(t_bucket *bucket)
{
	bucket->b->top = ft_dlstback(bucket->b->top, 1);
	bucket->b->bottom = ft_dlstback(bucket->b->bottom, 1);
	bucket->result++;
}

// rr : ra and rb at the same time.
void	do_rr(t_bucket *bucket)
{
	bucket->a->top = ft_dlstback(bucket->a->top, 1);
	bucket->a->bottom = ft_dlstback(bucket->a->bottom, 1);
	bucket->b->top = ft_dlstback(bucket->b->top, 1);
	bucket->b->bottom = ft_dlstback(bucket->b->bottom, 1);
	bucket->result++;
}

// rra : reverse rotate a
// shift down all elements of stack a by 1.
// The last element becomes the first one.
void	do_rra(t_bucket *bucket)
{
	bucket->a->top = ft_dlstnext(bucket->a->top, 1);
	bucket->a->bottom = ft_dlstnext(bucket->a->top, 1);
	bucket->result++;
}

// rrb : reverse rotate b
// shift down all elements of stack b by 1.
// The last element becomes the first one.
void	do_rrb(t_bucket *bucket)
{
	bucket->b->top = ft_dlstnext(bucket->b->top, 1);
	bucket->b->bottom = ft_dlstnext(bucket->b->top, 1);
	bucket->result++;
}

// rrr : rra and rrb at the same time
void	do_rrr(t_bucket *bucket)
{
	bucket->a->top = ft_dlstnext(bucket->a->top, 1);
	bucket->a->bottom = ft_dlstnext(bucket->a->top, 1);
	bucket->b->top = ft_dlstnext(bucket->b->top, 1);
	bucket->b->bottom = ft_dlstnext(bucket->b->top, 1);
	bucket->result++;	
}
