/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstnext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:20:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/19 17:29:26 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

t_dlst	*ps_dlstnext(t_dlst *node, unsigned int step)
{
	unsigned int	ix;
	t_dlst			*ptr;

	ix = 0;
	ptr = node;
	while (ix < step)
	{
		ptr = ptr->next;
		ix++;
	}
	return (ptr);
}