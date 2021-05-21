/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:27:46 by jekim             #+#    #+#             */
/*   Updated: 2021/05/21 15:09:17 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/dlst.h"
#include "../../libft/libft.h"

int		ft_isdigit_C(char *target)
{
	int ix;

	ix = 0;
	if (!target)
		return (EXIT_FAILURE);
	if (target[0] != '+' && target[0] != '-')
		return (EXIT_FAILURE);
	while(target[++ix])
	{
		if (!ft_isalnum(target[ix]))
			return (EXIT_FAILURE);
		ix++;
	}
	return (EXIT_SUCCESS);
}

int		ft_check_dup(t_stack *stack, t_dlst *node)
{
	int ix;
	t_dlst	*ptr;
	
	ix = 0;
	if (!stack || !node)
		return (EXIT_FAILURE);
	while (ix < stack->size)
	{
		ptr = stack->top;
		if (node->value == ptr->value)
			return (EXIT_FAILURE);
		else
			ptr = ptr->next;
		ix++;
	}
	return (EXIT_SUCCESS);
}

int		ft_dlst_putidx(t_stack *stack, t_dlst *node)
{
	if (!stack || !node)
		return (EXIT_FAILURE);
	node->idx = stack->size + 1;
	return (EXIT_SUCCESS);
}

// TODO
// ft_dlst_putdix, ft_dlstadd_front 구현
// 전체 테스트
int		ft_check_and_insert(char **argv, int argc, t_bucket *bucket)
{
	t_dlst		*node;
	int			ix;
	long long	value;

	ix = 1;
	while (argv[ix])
	{
		if (ft_isdigit_C(argv[ix]) == EXIT_FAILURE)
			return (EXIT_FAILURE);
		value = ft_atoi(argv[ix]);
		if (value > INT_MAX || value < INT_MIN)
			return (EXIT_FAILURE);
		node = ft_dlstnew((int)value);
		if (ft_check_dup(bucket->B, node)
			|| ft_dlst_putidx(bucket->B, node) 
			|| ft_dlstadd_front(bucket->B, node))
				return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}