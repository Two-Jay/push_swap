/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:01:42 by jekim             #+#    #+#             */
/*   Updated: 2021/05/18 21:26:47 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./include/push_swap.h"
#include "./include/dlst.h"

t_bucket *ft_init_bucket(void)
{
	t_bucket 	*bucket;
	t_stack		*A;
	t_stack		*B;
	
	bucket = (t_bucket *)ft_calloc(1, sizeof(t_bucket));
	if (!bucket)
		return (ft_handle_stderr("bucket init error in _init_bucket_\n");
	A = (t_stack *)ft_calloc(1, sizeof(t_stack));
	B = (t_stack *)ft_calloc(1, sizeof(t_stack));
	if (!A && !B)
		return (ft_handle_stderr("stack init error in _init_bucket_\n");
	bucket->A = A;
	bucket->B = B;
	return (bucket);
}

int main(int argc, char **argv)
{
	t_bucket *bucket;

	if (ft_validate_params(argc, argv))
		return (ft_handle_stderr("params validation error"));
	bucket = ft_init_bucket();
	if (bucket == EXIT_FAILURE)
		return (1);
	//elements check
}

// argc == 1
// stdio에서 아무것도 안나와야함 -> 그냥 exit;