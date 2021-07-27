/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_ra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:23:19 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 02:42:26 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_ra(t_bucket *bucket, int rr_flag, int checker_flag)
{
	unsigned int	ix;
	t_dlst			*old_top;

	if (bucket->a->size == 0)
		return ;
	ix = 0;
	old_top = bucket->a->top;
	bucket->a->top = old_top->next;
	bucket->a->bottom = old_top;
	if (!checker_flag && !rr_flag)
		write(1, "ra\n", 3);
	bucket->count++;
}