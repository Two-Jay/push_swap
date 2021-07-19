/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_ra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:23:19 by jekim             #+#    #+#             */
/*   Updated: 2021/07/19 20:26:53 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_ra(t_bucket *bucket)
{
	unsigned int ix;
	t_dlst	*old_top;

	ix = 0;
	old_top = bucket->a->top;
	bucket->a->top = old_top->next;
	bucket->a->bottom = old_top;
	bucket->count++;
}