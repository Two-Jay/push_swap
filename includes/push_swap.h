/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:37:26 by jekim             #+#    #+#             */
/*   Updated: 2021/07/18 13:36:00 by jekim            ###   ########seoul.kr  */
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
int fn_push_swap(t_bucket *data);
void fn_print_stack(t_bucket *data, int flag);
int		fn_print_dlst_detail(t_stack *stack);

int find_node_by_rank(t_stack *stack, int rank);
int fn_findup_rank_a(t_bucket *data, int rank);
int fn_findup_rank_b(t_bucket *data, int rank);

#endif



