/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_rrb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:24:56 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 19:34:38 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_rrb(t_bucket *bucket)
{
	bucket->b->top = ps_dlstnext(bucket->b->top, 1);
	bucket->b->bottom = ps_dlstnext(bucket->b->top, 1);
	bucket->result++;
}