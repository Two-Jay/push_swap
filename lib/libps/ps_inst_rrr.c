/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:25:30 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 19:35:02 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_rrr(t_bucket *bucket)
{
	bucket->a->top = ps_dlstnext(bucket->a->top, 1);
	bucket->a->bottom = ps_dlstnext(bucket->a->top, 1);
	bucket->b->top = ps_dlstnext(bucket->b->top, 1);
	bucket->b->bottom = ps_dlstnext(bucket->b->top, 1);
	bucket->result++;	
}
