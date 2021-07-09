/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_rb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:23:52 by jekim             #+#    #+#             */
/*   Updated: 2021/07/10 08:11:43 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_rb(t_bucket *bucket)
{
	bucket->b->top = ps_dlstprev(bucket->b->top, 1);
	bucket->b->bottom = ps_dlstprev(bucket->b->bottom, 1);
	bucket->count++;
}