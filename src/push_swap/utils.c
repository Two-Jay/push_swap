/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 22:22:59 by jekim             #+#    #+#             */
/*   Updated: 2021/07/27 22:33:02 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	fn_findup_by_rank_a(t_bucket *data, int rank)
{
	void	(*fp)(t_bucket *, int, int);
	int		rra_flag;
	int		count;
	int		ix;

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
		fp(data, 0, 0);
		ix++;
	}
	return (1);
}

int	fn_findup_by_rank_b(t_bucket *data, int rank)
{
	void	(*fp)(t_bucket *, int, int);
	int		rra_flag;
	int		count;
	int		ix;

	ix = 0;
	rra_flag = 0;
	fp = ps_inst_rb;
	count = ps_dlstfind_idx(data->b, rank, &rra_flag);
	if (count < 0)
		return (0);
	if (rra_flag == 1)
	{
		fp = ps_inst_rrb;
		count = (count - data->b->size) * -1;
	}
	while (ix < count)
	{
		fp(data, 0, 0);
		ix++;
	}
	return (1);
}

int	fn_findup_by_index_a(t_bucket *data, int index, int drc)
{
	void	(*fp)(t_bucket *, int, int);
	int		rra_flag;
	int		ix;

	ix = 0;
	rra_flag = 0;
	fp = ps_inst_ra;
	if (drc == -1)
		fp = ps_inst_rra;
	while (ix < index)
	{
		fp(data, 0, 0);
		ix++;
	}
	return (1);
}

int	fn_findup_by_index_b(t_bucket *data, int index, int drc)
{
	void	(*fp)(t_bucket *, int, int);
	int		rra_flag;
	int		ix;

	ix = 0;
	rra_flag = 0;
	fp = ps_inst_rb;
	if (drc == -1)
		fp = ps_inst_rrb;
	while (ix < index)
	{
		fp(data, 0, 0);
		ix++;
	}
	return (1);
}

int	find_node_chunk(t_bucket *data, int r_min, int r_max, int drc)
{
	int		ix;
	t_dlst	*nptr;
	t_dlst	*(*fp)(t_dlst *, unsigned int);

	ix = 0;
	nptr = data->a->top;
	fp = ps_dlstnext;
	if (drc == -1)
		fp = ps_dlstprev;
	while (ix < data->a->size)
	{
		if (nptr->rank >= r_min && nptr->rank <= r_max)
			return (ix);
		nptr = fp(nptr, 1);
		ix++;
	}
	return (ix);
}
