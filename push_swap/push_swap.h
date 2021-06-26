/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:37:26 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 19:40:24 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "../libft/libft.h"
#include "../libps/libps.h"

void 	ft_init_storage(t_bucket *bucket);
int		ft_isdigit_C(char *target);
int		ft_check_dup(t_stack *stack, t_dlst *node);
int		ft_dlst_putidx(t_stack *stack, t_dlst *node);
int		ft_check_and_insert(char **argv, int argc, t_bucket *bucket);

#endif PUSH_SWAP_H