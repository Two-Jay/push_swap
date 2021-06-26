/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:01:42 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 21:00:25 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

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
}