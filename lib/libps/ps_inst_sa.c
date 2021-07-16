/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_sa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:20:44 by jekim             #+#    #+#             */
/*   Updated: 2021/07/17 00:26:08 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_sa(t_bucket *bucket)
{
	int old_top_value;
	int new_top_value;

	if (bucket->a->size < 2)
		return ;
	old_top_value = bucket->a->top->value;
	new_top_value = bucket->a->top->next->value;
	ps_dlstpop_front(bucket->a);
	ps_dlstpop_front(bucket->a);
	ps_dlstadd_front(bucket->a, ps_dlstnew(old_top_value));
	ps_dlstadd_front(bucket->a, ps_dlstnew(new_top_value));
	bucket->count++;
}