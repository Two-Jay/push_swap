/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_rra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:24:35 by jekim             #+#    #+#             */
/*   Updated: 2021/07/19 20:36:52 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_rra(t_bucket *bucket)
{
	unsigned int ix;
	t_dlst	*old_bottom;

	ix = 0;
	old_bottom = bucket->a->bottom;
	bucket->a->top = old_bottom;
	bucket->a->bottom = old_bottom->before;
	bucket->count++;
}