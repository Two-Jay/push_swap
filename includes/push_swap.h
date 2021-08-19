/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:37:26 by jekim             #+#    #+#             */
/*   Updated: 2021/08/20 01:22:48 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../lib/libft/libft.h"
# include "../lib/libps/libps.h"

# define STR_ARG 1
# define NUM_ARG 2

int		fn_bubblesort(int *arr, int size);
int		fn_is_sorted(int *arr, int size);
int		fn_push_swap(t_bucket *data);
void	fn_print_stack(t_bucket *data, int flag);
int		fn_print_dlst_detail(t_stack *stack);
int		fn_strequel(char *line, char *target);
int		fn_set_argv(int argc, char **argv, t_bucket *data);

int		fn_findup_by_rank_a(t_bucket *data, int rank);
int		fn_findup_by_rank_b(t_bucket *data, int rank);
int		fn_findup_by_index_a(t_bucket *data, int index, int drc);
int		find_node_chunk(t_bucket *data, int r_min, int r_max, int drc);

int		fn_push_swap_t3(t_bucket *data);
int		fn_push_swap_t5(t_bucket *data);
int		fn_push_swap_t7(t_bucket *data);
int		fn_push_swap_t100(t_bucket *data, int chunk_nbr, int chunk_size);
int		fn_push_swap_o100(t_bucket *data, int chunk_nbr, int chunk_size);

void	fn_check_setting_type(int argc, char **argv, t_bucket *data);
int		fn_fill_stack(t_bucket *data);
int		fn_fill_arr(t_bucket *data);

#endif
