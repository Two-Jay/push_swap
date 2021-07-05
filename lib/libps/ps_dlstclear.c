/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:27:28 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 19:15:40 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

int		ps_dlstclear(t_stack *stack)
{
	size_t ix;

	ix = 0;
	while (ix < stack->size)
		ps_dlstdel_front(stack);
	return (EXIT_SUCCESS);
}
