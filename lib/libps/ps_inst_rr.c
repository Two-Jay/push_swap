/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:24:12 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 19:35:31 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_rr(t_bucket *bucket)
{
	bucket->a->top = ps_dlstprev(bucket->a->top, 1);
	bucket->a->bottom = ps_dlstprev(bucket->a->bottom, 1);
	bucket->b->top = ps_dlstprev(bucket->b->top, 1);
	bucket->b->bottom = ps_dlstprev(bucket->b->bottom, 1);
	bucket->result++;
}