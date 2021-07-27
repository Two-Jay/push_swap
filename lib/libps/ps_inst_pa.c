/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_pa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:22:14 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 02:42:15 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_pa(t_bucket *bucket, int checker_flag)
{
	t_dlst	*node;

	if (bucket->b->size == 0)
		return ;
	node = ps_dlstpop_front(bucket->b);
	ps_dlstadd_front(bucket->a, node);
	if (!checker_flag)
		write(1, "pa\n", 3);
	bucket->count++;
}