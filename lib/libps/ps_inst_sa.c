/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_sa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:20:44 by jekim             #+#    #+#             */
/*   Updated: 2021/07/17 04:21:51 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_sa(t_bucket *bucket)
{
	t_dlst	*first;
	t_dlst	*second;

	if (bucket->a->size < 2)
		return ;
	first = ps_dlstpop_front(bucket->a);
	second = ps_dlstpop_front(bucket->a);
	ps_dlstadd_front(bucket->a, first);
	ps_dlstadd_front(bucket->a, second);
	bucket->count++;
}