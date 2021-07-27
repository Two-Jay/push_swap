/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:24:12 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 02:42:41 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_rr(t_bucket *bucket, int checker_flag)
{
	ps_inst_ra(bucket, 1, checker_flag);
	ps_inst_rb(bucket, 1, checker_flag);
	if (!checker_flag)
		write(1, "rr\n", 3);
	bucket->count--;
}