/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 13:34:59 by jekim             #+#    #+#             */
/*   Updated: 2021/07/21 07:35:49 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int fn_findup_by_rank_a(t_bucket *data, int rank)
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
	{
		fp = ps_inst_rra;
		count = (count - data->a->size) * -1;
	}
	while (ix < count)
	{
		fp(data);
		ix++;
	}
	return (1);
}

int fn_findup_by_rank_b(t_bucket *data, int rank)
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

int fn_strequel(char *line, char *target)
{
	int ix;
	int size;

	if (!(*line) && !(*target))
		return (0);
	if (!(*line) || !(*target))
		return (0);
	size = ft_strlen(line);
	if (size != (int)ft_strlen(target))
		return (0);
	ix= 0;
	while (ix < size)
	{
		if (line[ix] != target[ix])
			return (0);
		ix++;
	}
	return (1);
}