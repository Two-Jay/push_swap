/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:25:30 by jekim             #+#    #+#             */
/*   Updated: 2021/07/27 08:13:07 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_rrr(t_bucket *bucket, int checker_flag)
{
	ps_inst_rra(bucket, 1, checker_flag);
	ps_inst_rrb(bucket, 1, checker_flag);
	if (!checker_flag)
		write(1, "rrr\n", 3);
	bucket->count--;
}