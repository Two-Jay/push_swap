/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_pb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:22:41 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 19:33:12 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_pb(t_bucket *bucket)
{
	t_dlst	*node;
	
	node = ps_dlstpop_front(bucket->a);
	ps_dlstadd_front(bucket->b, node);
	bucket->result++;
}