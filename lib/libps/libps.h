/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libps.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:09:12 by jekim             #+#    #+#             */
/*   Updated: 2021/09/03 11:49:40 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPS_H
# define LIBPS_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_dlst
{
	int				rank;
	int				value;
	int				bv;
	struct s_dlst	*next;
	struct s_dlst	*before;
}				t_dlst;

typedef struct s_stack
{
	t_dlst		*top;
	t_dlst		*bottom;
	int			size;
}				t_stack;

typedef struct s_bucket
{
	t_stack	*a;
	t_stack	*b;

	int		*input_arr;
	char	**input_arr_str;
	int		size;
	int		count;
	int		arg_type;
	int		arg_size;
}				t_bucket;

# define TRUE 1
# define FALSE 0

t_bucket	*ps_bucketnew(void);
int			ps_stack_issorted_asc(t_stack *stack);
int			ps_stack_issorted_dsc(t_stack *stack);

int			ps_dlstadd_back(t_stack *stack, t_dlst *node);
int			ps_dlstadd_front(t_stack *stack, t_dlst *node);
int			ps_dlstclear(t_stack *stack);
int			ps_dlstdel_front(t_stack *stack);
t_dlst		*ps_dlstnew(int value);
t_dlst		*ps_dlstnext(t_dlst *node, unsigned int step);
t_dlst		*ps_dlstpop_back(t_stack *stack);
t_dlst		*ps_dlstpop_front(t_stack *stack);
t_dlst		*ps_dlstprev(t_dlst *node, unsigned int step);
int			ps_dlstswap(t_dlst *node);
int			ps_dlstprint(t_stack *stack);
int			ps_dlstfind_idx(t_stack *stack, int rank, int *rra_flag);
int			ps_indexOf(t_stack *stack, int rank);

void		ps_inst_sa(t_bucket *bucket, int ss_flag, int checker_flag);
void		ps_inst_sb(t_bucket *bucket, int ss_flag, int checker_flag);
void		ps_inst_ss(t_bucket *bucket, int checker_flag);
void		ps_inst_pa(t_bucket *bucket, int checker_flag);
void		ps_inst_pb(t_bucket *bucket, int checker_flag);
void		ps_inst_ra(t_bucket *bucket, int rr_flag, int checker_flag);
void		ps_inst_rb(t_bucket *bucket, int rr_flag, int checker_flag);
void		ps_inst_rr(t_bucket *bucket, int checker_flag);
void		ps_inst_rra(t_bucket *bucket, int rrr_flag, int checker_flag);
void		ps_inst_rrb(t_bucket *bucket, int rrr_flag, int checker_flag);
void		ps_inst_rrr(t_bucket *bucket, int checker_flag);

#endif
