/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/05 11:28:22 by jekim            ###   ########.fr       */
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