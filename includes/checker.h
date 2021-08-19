/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:37:26 by jekim             #+#    #+#             */
/*   Updated: 2021/08/20 01:23:37 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../lib/libft/libft.h"
# include "../lib/libps/libps.h"

# define STR_ARG 1
# define NUM_ARG 2

int		fn_bubblesort(int *arr, int size);
int		fn_is_sorted(int *arr, int size);
void	fn_clear_memory(t_bucket *data);
void	fn_validate_input(int argc, char **argv, t_bucket *data);
void	fn_print_stack(t_bucket *data, int flag);

int		fn_fill_stack(t_bucket *data);
int		fn_fill_arr(t_bucket *data);
int		fn_set_argv(int argc, char **argv, t_bucket *data);

#endif