/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:02:06 by jekim             #+#    #+#             */
/*   Updated: 2021/05/19 18:41:20 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLST_H
# define DLST_H

typedef struct	s_bucket
{
	t_stack	*A;
	t_stack	*B;
	size_t	size;
}				t_bucket;

typedef struct	s_stack
{
	t_dlst	*top; // 임의의 주소
	t_dlst	*bottom; // 임의의 주소가 가리키는 노드의 이전 노드
	size_t	size;
}				t_stack;

typedef struct	s_dlst
{
	size_t	idx;
	void	*value;
	t_dlst	*next;
	t_dlst	*before;
}				t_dlst;

t_dlst			*ft_dlstnew(void *value);
t_dlst			*ft_dlstpop_back(t_stack *stack);
t_dlst			*ft_dlstpop_front(t_stack *stack);
int				ft_dlstadd_back(t_stack *stack, t_dlst *node);
int				ft_dlstadd_front(t_stack *stack, t_dlst *node);
t_dlst			*ft_dlstnext(t_dlst *node, unsigned int step);
t_dlst			*ft_dlstback(t_dlst *node, unsigned int step);
unsigned int	ft_dlst_idxof(t_stack *stack, int target); // if the func fails, return -1

#endif