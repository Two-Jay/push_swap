/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/10 07:32:18 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/checker.h"

static void 	ft_init_storage(t_bucket *bucket)
{	
	bucket = ft_bucketnew();
	if (bucket == EXIT_FAILURE)
		ft_putendl("Error");
}

int main(int argc, char **argv)
{
	t_bucket *bucket;

	ft_init_bucketnew(bucket);
}