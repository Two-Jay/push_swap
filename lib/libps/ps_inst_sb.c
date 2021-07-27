/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:21:14 by jekim             #+#    #+#             */
/*   Updated: 2021/07/27 05:08:23 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_sb(t_bucket *bucket, int ss_flag, int checker_flag)
{
	t_dlst	*first;
	t_dlst	*second;

	if (bucket->b->size < 2)
		return ;
	first = ps_dlstpop_front(bucket->b);
	second = ps_dlstpop_front(bucket->b);
	ps_dlstadd_front(bucket->b, first);
	ps_dlstadd_front(bucket->b, second);
	if (!checker_flag && !ss_flag)
		write(1, "sb\n", 3);
	bucket->count++;
}
