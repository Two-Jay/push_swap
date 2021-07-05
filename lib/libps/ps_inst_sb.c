/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:21:14 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 19:26:58 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_sb(t_bucket *bucket)
{
	t_dlst	*ptr1;
	t_dlst	*ptr2;

	if (bucket->a->size < 2)
		return ;
	ptr1 = bucket->b->top;
	ptr2 = bucket->b->top->next;
	bucket->b->top = ptr2;
	ptr1->before = ptr2;
	ptr1->next = ptr2->next;
	ptr2->before = bucket->b->bottom;
	ptr2->next = ptr1;
	bucket->result++;
}