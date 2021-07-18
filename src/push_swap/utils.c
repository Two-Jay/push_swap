/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:34:59 by jekim             #+#    #+#             */
/*   Updated: 2021/07/18 17:39:05 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int fn_findup_rank_a(t_bucket *data, int rank)
{
	void (*fp)(t_bucket *);
	int rra_flag;
	int count;
	int ix;

	ix = 0;
	rra_flag = 0;
	fp = ps_inst_ra;
	count = ps_dlstfind_idx(data->a, rank, &rra_flag);
	if (count < 0)
		return (0);
	if (rra_flag == 1)
		fp = ps_inst_rrb;
	while (ix < count)
	{
		fp(data);
		ix++;
	}
	return (1);
}

int fn_findup_rank_b(t_bucket *data, int rank)
{
	void (*fp)(t_bucket *);
	int rra_flag;
	int count;
	int ix;

	ix = 0;
	rra_flag = 0;
	fp = ps_inst_rb;
	count = ps_dlstfind_idx(data->b, rank, &rra_flag);
	if (count < 0)
		return (0);
	if (rra_flag == 1)
		fp = ps_inst_rrb;
	while (ix < count)
	{
		fp(data);
		ix++;	
	}
	return (1);
}