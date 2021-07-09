/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_ra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:23:19 by jekim             #+#    #+#             */
/*   Updated: 2021/07/10 08:11:43 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_ra(t_bucket *bucket)
{
	bucket->a->top = ps_dlstprev(bucket->a->top, 1);
	bucket->a->bottom = ps_dlstprev(bucket->a->bottom, 1);
	bucket->count++;
}