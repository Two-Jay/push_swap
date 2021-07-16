/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:21:14 by jekim             #+#    #+#             */
/*   Updated: 2021/07/16 23:48:17 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_sb(t_bucket *bucket)
{
	int old_top_value;
	int new_top_value;

	if (bucket->a->size < 2)
		return ;
	old_top_value = bucket->b->top->value;
	new_top_value = bucket->b->top->next->value;
	ps_dlstpop_front(bucket->b);
	ps_dlstpop_front(bucket->b);
	ps_dlstadd_front(bucket->b, ps_dlstnew(old_top_value));
	ps_dlstadd_front(bucket->b, ps_dlstnew(new_top_value));
	bucket->count++;
}