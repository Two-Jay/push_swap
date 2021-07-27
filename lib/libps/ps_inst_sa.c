/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_sa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:20:44 by jekim             #+#    #+#             */
/*   Updated: 2021/07/27 05:08:19 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_sa(t_bucket *bucket, int ss_flag, int checker_flag)
{
	t_dlst	*first;
	t_dlst	*second;

	if (bucket->a->size < 2)
		return ;
	first = ps_dlstpop_front(bucket->a);
	second = ps_dlstpop_front(bucket->a);
	ps_dlstadd_front(bucket->a, first);
	ps_dlstadd_front(bucket->a, second);
	if (!checker_flag && !ss_flag)
		write(1, "sa\n", 3);
	bucket->count++;
}
