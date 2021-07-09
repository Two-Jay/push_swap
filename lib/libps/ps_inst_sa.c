/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_sa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:20:44 by jekim             #+#    #+#             */
/*   Updated: 2021/07/10 08:11:43 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_sa(t_bucket *bucket)
{
	t_dlst	*ptr1;
	t_dlst	*ptr2;

	if (bucket->a->size < 2)
		return ;
	ptr1 = bucket->a->top;
	ptr2 = bucket->a->top->next;
	bucket->a->top = ptr2;
	ptr1->before = ptr2;
	ptr1->next = ptr2->next;
	ptr2->before = bucket->a->bottom;
	ptr2->next = ptr1;
	bucket->count++;
}