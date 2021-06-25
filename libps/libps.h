/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libps.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:09:12 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 01:31:25 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPS_H
# define LIBPS_H

#include <unistd.h>
#include <stdlib.h>

typedef struct		s_dlst
{
	size_t			idx;
	int				value;
	struct s_dlst	*next;
	struct s_dlst	*before;
}					t_dlst;

typedef struct		s_stack
{
	t_dlst			*top;
	t_dlst			*bottom;
	size_t			size;
}					t_stack;

typedef struct		s_bucket
{
	t_stack			*a;
	t_stack			*b;
	size_t			size;
	int				result;
}					t_bucket;

# define TRUE 1
# define FALSE 0

int		ps_dlstadd_back(t_stack *stack, t_dlst *node);
int		ps_dlstadd_front(t_stack *stack, t_dlst *node);
int		ps_dlstclear(t_stack *stack);
int		ps_dlstdel_front(t_stack *stack);
t_dlst	*ps_dlstnew(int value);
t_dlst	*ps_dlstnext(t_dlst *node, unsigned int step);
t_dlst	*ps_dlstnext(t_dlst *node, unsigned int step);
t_dlst	*ps_dlstpop_back(t_stack *stack);
t_dlst	*ps_dlstpop_front(t_stack *stack);
t_dlst	*ps_dlstprev(t_dlst *node, unsigned int step);
int		ps_dlstswap(t_dlst *node);
int		ps_dlstprint(t_stack *stack);

#endif
