/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:01:42 by jekim             #+#    #+#             */
/*   Updated: 2021/05/20 17:48:39 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"
#include "./include/dlst.h"

t_stack		ft_set_dumnode(t_stack *stack)
{
	t_dlst	node;
	
	node = ft_dlstnew(NULL);
}

t_bucket	*ft_init_bucket(void)
{
	t_bucket 	*bucket;
	t_stack		*A;
	t_stack		*B;
	
	bucket = (t_bucket *)ft_calloc(1, sizeof(t_bucket));
	if (!bucket)
		return (ft_handle_stderr("bucket init error in _init_bucket_\n"));
	A = (t_stack *)ft_calloc(1, sizeof(t_stack));
	B = (t_stack *)ft_calloc(1, sizeof(t_stack));
	if (!A && !B)
		return (ft_handle_stderr("stack init error in _init_bucket_\n"));
	bucket->A = A;
	bucket->B = B;
	return (bucket);
}

t_stack		*ft_init_stack(void)
{
	t_stack	*stack;
	
	stack =(t_stack *)ft_calloc(1, sizeof(t_stack));
	
	//
}

int main(int argc, char **argv)
{
	t_bucket *bucket;
	
	bucket = ft_init_bucket();
	if (bucket == EXIT_FAILURE)
		return (EXIT_FAILURE);
	if (ft_check_and_insert(argc, argv, bucket))
		return (ft_handle_stderr("params validation error"));
	//elements check
}