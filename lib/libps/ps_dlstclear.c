/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:27:28 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 02:41:24 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

int	ps_dlstclear(t_stack *stack)
{
	int	ix;
	int	limit;

	ix = 0;
	limit = stack->size;
	while (ix < limit)
	{
		ps_dlstdel_front(stack);
		ix++;
	}
	return (EXIT_SUCCESS);
}
