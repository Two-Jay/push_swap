/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 12:01:49 by jekim             #+#    #+#             */
/*   Updated: 2021/05/21 09:46:58 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h> // for test;
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

# define TRUE 1
# define FALSE 0

int	ft_validate_params(int argc, char **argv);
int ft_print_stderr(char *errstr);

#endif