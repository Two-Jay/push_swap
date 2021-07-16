/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:21:14 by jekim             #+#    #+#             */
/*   Updated: 2021/07/17 04:23:51 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_sb(t_bucket *bucket)
{
	t_dlst	*first;
	t_dlst	*second;

	if (bucket->a->size < 2)
		return ;
	first = ps_dlstpop_front(bucket->b);
	second = ps_dlstpop_front(bucket->b);
	ps_dlstadd_front(bucket->b, first);
	ps_dlstadd_front(bucket->b, second);
	bucket->count++;
}