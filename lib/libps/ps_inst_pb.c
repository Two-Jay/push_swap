/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_pb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:22:41 by jekim             #+#    #+#             */
/*   Updated: 2021/07/27 05:06:24 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"
#include <stdio.h>

void	ps_inst_pb(t_bucket *bucket, int checker_flag)
{
	t_dlst	*node;
	
	if (bucket->a->size == 0)
		return ;
	node = ps_dlstpop_front(bucket->a);
	ps_dlstadd_front(bucket->b, node);
	if (!checker_flag)
		write(1, "pb\n", 3);
	bucket->count++;
}