/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlst.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:02:06 by jekim             #+#    #+#             */
/*   Updated: 2021/05/20 14:15:37 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLST_H
# define DLST_H

typedef struct	s_dlst
{
	size_t	idx;
	int		value;
	struct s_dlst	*next;
	struct s_dlst	*before;
}				t_dlst;

typedef struct	s_stack
{
	t_dlst	*top; // 임의의 주소
	t_dlst	*bottom; // 임의의 주소가 가리키는 노드의 이전 노드
	size_t	size;
}				t_stack;

typedef struct	s_bucket
{
	t_stack	*A;
	t_stack	*B;
	size_t	size;
}				t_bucket;



t_dlst	*ft_dlstnew(int value);

#endif