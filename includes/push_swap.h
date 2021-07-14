/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:37:26 by jekim             #+#    #+#             */
/*   Updated: 2021/07/14 16:17:35 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../lib/libft/libft.h"
#include "../lib/libps/libps.h"

int fn_bubblesort(int *arr, int size);
int		fn_is_sorted(int *arr, int size);
int fn_validate_input(int argc, char **argv, t_bucket *data);

#endif