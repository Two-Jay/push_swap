/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_ss.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:21:36 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 19:26:58 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_ss(t_bucket *bucket)
{
	ps_inst_sa(bucket);
	ps_inst_sb(bucket);
	bucket->result--;
}