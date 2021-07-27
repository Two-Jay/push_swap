/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_ss.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:21:36 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 02:43:10 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_ss(t_bucket *bucket, int checker_flag)
{
	ps_inst_sa(bucket, 1, checker_flag);
	ps_inst_sb(bucket, 1, checker_flag);
	if (!checker_flag)
		write(1, "ss\n", 3);
	bucket->count--;
}
