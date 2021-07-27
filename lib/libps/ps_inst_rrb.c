/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_rrb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:24:56 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 02:43:00 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_rrb(t_bucket *bucket, int rrr_flag, int checker_flag)
{
	unsigned int	ix;
	t_dlst			*old_bottom;

	if (bucket->b->size == 0)
		return ;
	ix = 0;
	old_bottom = bucket->b->bottom;
	bucket->b->top = old_bottom;
	bucket->b->bottom = old_bottom->before;
	if (!checker_flag && !rrr_flag)
		write(1, "rrb\n", 4);
	bucket->count++;
}
