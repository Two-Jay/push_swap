/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstprev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:21:11 by jekim             #+#    #+#             */
/*   Updated: 2021/07/19 17:31:12 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

t_dlst	*ps_dlstprev(t_dlst *node, unsigned int step)
{
	unsigned int	ix;
	t_dlst			*ptr;

	ix = 0;
	ptr = node;
	while (ptr->before && ix < step)
	{
		ptr = ptr->before;
		ix++;
	}
	return (ptr);
}
