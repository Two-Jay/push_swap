/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:02:06 by jekim             #+#    #+#             */
/*   Updated: 2021/05/22 21:00:53 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLST_H
# define DLST_H

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

t_dlst				*ft_dlstnew(int value);
t_dlst				*ft_dlstpop_back(t_stack *stack);
t_dlst				*ft_dlstpop_front(t_stack *stack);
int					ft_dlstadd_back(t_stack *stack, t_dlst *node);
int					ft_dlstadd_front(t_stack *stack, t_dlst *node);
t_dlst				*ft_dlstnext(t_dlst *node, unsigned int step);
t_dlst				*ft_dlstback(t_dlst *node, unsigned int step);
int					ft_dlstdel_front(t_stack *stack);
int					ft_dlstclear(t_stack *stack);
unsigned int		ft_dlst_idxof(t_stack *stack, int target);

#endif
