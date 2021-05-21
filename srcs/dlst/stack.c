/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 16:26:46 by jekim             #+#    #+#             */
/*   Updated: 2021/05/21 20:09:27 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/dlst.h"
#include "../../include/push_swap.h"
#include "../libft/libft.h"

t_bucket	*ft_init_bucket(void)
{
	t_bucket	*bucket;
	t_stack		*a;
	t_stack		*b;

	bucket = (t_bucket *)ft_calloc(1, sizeof(t_bucket));
	if (!bucket)
		return (ft_handle_stderr("bucket init error in _init_bucket_\n"));
	a = (t_stack *)calloc(1, sizeof(t_stack));
	b = (t_stack *)calloc(1, sizeof(t_stack));
	if (!a || !b)
		return (ft_handle_stderr("stack init error in _init_bucket_\n"));
	bucket->A = a;
	bucket->B = b;
	return (bucket);
}
