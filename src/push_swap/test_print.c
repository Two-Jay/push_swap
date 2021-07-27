/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 02:01:58 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 04:24:12 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	fn_dlstprint(t_stack *stack)
{
	int		ix;
	t_dlst	*ptr;

	ix = 0;
	if (!stack)
		return (EXIT_FAILURE);
	if (stack->size == 0 && stack->top == NULL)
		return (printf("\n"));
	ptr = stack->top;
	while (ix < stack->size)
	{
		if (ix == stack->size - 1)
			ft_printf("%d", ptr->value);
		else
			ft_printf("%d ", ptr->value);
		ptr = ptr->next;
		ix++;
	}
	ft_printf("\n");
	return (EXIT_SUCCESS);
}

void	fn_print_stack(t_bucket *data, int flag)
{
	if (flag == 1)
		ft_printf("===== before ===\n");
	if (flag == 2)
		ft_printf("===== after ===\n");
	ft_printf("A : ");
	fn_dlstprint(data->a);
	ft_printf("B : ");
	fn_dlstprint(data->b);
	if (flag == 2)
		ft_printf("result : [%d]\n", data->count);
}
