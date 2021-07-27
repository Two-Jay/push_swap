/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_rra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:24:35 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 02:42:51 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_rra(t_bucket *bucket, int rrr_flag, int checker_flag)
{
	unsigned int	ix;
	t_dlst			*old_bottom;

	if (bucket->a->size == 0)
		return ;
	ix = 0;
	old_bottom = bucket->a->bottom;
	bucket->a->top = old_bottom;
	bucket->a->bottom = old_bottom->before;
	if (!checker_flag && !rrr_flag)
		write(1, "rra\n", 4);
	bucket->count++;
}