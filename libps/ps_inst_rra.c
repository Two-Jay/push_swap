/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_inst_rra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:24:35 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 19:34:33 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_inst_rra(t_bucket *bucket)
{
	bucket->a->top = ps_dlstnext(bucket->a->top, 1);
	bucket->a->bottom = ps_dlstnext(bucket->a->top, 1);
	bucket->result++;
}