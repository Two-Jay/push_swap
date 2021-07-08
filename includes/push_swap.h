/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:37:26 by jekim             #+#    #+#             */
/*   Updated: 2021/07/08 12:10:04 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "../lib/libft/libft.h"
#include "../lib/libps/libps.h"

typedef struct	s_data
{
	t_dlst *a_stack;
	t_dlst *a_top;
	t_dlst *a_bottom;

	t_dlst *b_stack;
	t_dlst *b_top;
	t_dlst *b_bottom;

	int *input_arr;
	int	size_all;
	int	size_a;
	int size_b;
	int result;
}				t_data;

#endif