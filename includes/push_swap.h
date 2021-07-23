/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:37:26 by jekim             #+#    #+#             */
/*   Updated: 2021/07/23 14:46:40 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../lib/libft/libft.h"
#include "../lib/libps/libps.h"

# define CHUNK_SIZE 10
# define STR_ARG 1
# define NUM_ARG 2

int fn_bubblesort(int *arr, int size);
int	fn_is_sorted(int *arr, int size);
int fn_validate_input(int argc, char **argv, t_bucket *data);
int fn_push_swap(t_bucket *data);
void fn_print_stack(t_bucket *data, int flag);
int	fn_print_dlst_detail(t_stack *stack);
int fn_strequel(char *line, char *target);

int find_node_by_rank(t_stack *stack, int rank);
int fn_findup_by_rank_a(t_bucket *data, int rank);
int fn_findup_by_rank_b(t_bucket *data, int rank);

#endif



