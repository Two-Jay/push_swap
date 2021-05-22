/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:01:42 by jekim             #+#    #+#             */
/*   Updated: 2021/05/22 18:41:04 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/dlst.h"

void 	ft_init_storage(t_bucket *bucket)
{	
	bucket = ft_bucketnew();
	if (bucket == EXIT_FAILURE)
		ft_putendl("Error");	
}

int main(int argc, char **argv)
{
	t_bucket *bucket;
	
	ft_init_storage(bucket);
	if (ft_check_and_insert(argc, argv, bucket))
		return (ft_handle_stderr("params validation error"));
	//elements check
}