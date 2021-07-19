/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_rb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:23:52 by jekim             #+#    #+#             */
/*   Updated: 2021/07/19 20:27:54 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_rb(t_bucket *bucket)
{
	unsigned int ix;
	t_dlst	*old_top;

	ix = 0;
	old_top = bucket->b->top;
	bucket->b->top = old_top->next;
	bucket->b->bottom = old_top;
	bucket->count++;
}