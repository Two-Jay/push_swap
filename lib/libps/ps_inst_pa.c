/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_pa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:22:14 by jekim             #+#    #+#             */
/*   Updated: 2021/07/10 08:11:43 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_pa(t_bucket *bucket)
{
	t_dlst	*node;
	
	node = ps_dlstpop_front(bucket->b);
	ps_dlstadd_front(bucket->a, node);
	bucket->count++;
}