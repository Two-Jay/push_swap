/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_rrb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:24:56 by jekim             #+#    #+#             */
/*   Updated: 2021/07/19 20:37:09 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_rrb(t_bucket *bucket)
{
	unsigned int ix;
	t_dlst	*old_bottom;

	ix = 0;
	old_bottom = bucket->b->bottom;
	bucket->b->top = old_bottom;
	bucket->b->bottom = old_bottom->before;
	bucket->count++;
}