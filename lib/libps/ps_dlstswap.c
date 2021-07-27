/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_dlstswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:25:49 by jekim             #+#    #+#             */
/*   Updated: 2021/07/27 04:44:03 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

void	ps_dlstswap_next(t_dlst *node)
{
	t_dlst *ptr_next;
	
	ptr_next = node->next;
	node->before->next = ptr_next;
}