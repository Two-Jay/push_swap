/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_rb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:23:52 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 02:42:35 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_rb(t_bucket *bucket, int rr_flag, int checker_flag)
{
	unsigned int	ix;
	t_dlst			*old_top;

	if (bucket->b->size == 0)
		return ;
	ix = 0;
	old_top = bucket->b->top;
	bucket->b->top = old_top->next;
	bucket->b->bottom = old_top;
	if (!checker_flag && !rr_flag)
		write(1, "rb\n", 3);
	bucket->count++;
}