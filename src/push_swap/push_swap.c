/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/05 11:35:16 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void 	ft_init_storage(t_bucket *bucket)
{	
	bucket = ps_bucketnew();
	if (bucket == NULL)
		ft_putendl_fd("Error", 1);
}

int main(int argc, char **argv)
{
	t_bucket *bucket;

	(void)argc;
	(void)argv;
	bucket = NULL;
	ft_init_storage(bucket);
	write(1, "check push_swap", 16);
}