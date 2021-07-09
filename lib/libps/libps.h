/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libps.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:09:12 by jekim             #+#    #+#             */
/*   Updated: 2021/07/10 07:33:23 by jekim            ###   ########seoul.kr  */
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
	int				size;
}					t_stack;

typedef struct	s_data
{
	t_stack *a;
	t_stack *b;

	int *input_arr;
	int	size_all;
	int result;
}				t_bucket;

// 여기에는 push_swap 프젝에 필요한 더블드 링크드 리스트와 스텍의 정보만 담을 것.
// 이후의 재사용성이 없다고 판단되는 것은 쳐내거나 추가하지 말 것!

# define TRUE 1
# define FALSE 0

t_bucket	*ps_bucketnew(void);

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

void	ps_inst_sa(t_bucket *bucket);
void	ps_inst_sb(t_bucket *bucket);
void	ps_inst_ss(t_bucket *bucket);
void	ps_inst_pa(t_bucket *bucket);
void	ps_inst_pb(t_bucket *bucket);
void	ps_inst_ra(t_bucket *bucket);
void	ps_inst_rb(t_bucket *bucket);
void	ps_inst_rr(t_bucket *bucket);
void	ps_inst_rra(t_bucket *bucket);
void	ps_inst_rrb(t_bucket *bucket);
void	ps_inst_rrr(t_bucket *bucket);

#endif
