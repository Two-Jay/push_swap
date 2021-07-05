/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/05 18:56:15 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void 	ft_init_storage(t_bucket *bucket, int argc, char **argv)
{
	if (argc <= 1)
		ft_strerr("Error\n : a few parameters");
	bucket = ps_bucketnew();
	if (bucket == NULL)
		ft_strerr("Error\n");
}

int main(int argc, char **argv)
{
	t_bucket *bucket;

	write(1, "check push_swap", 16);
}