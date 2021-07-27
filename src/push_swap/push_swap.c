/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 00:22:04 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	fn_print_stack(t_bucket *data, int flag)
{
	if (flag == 1)
		printf("===== before ===\n");
	if (flag == 2)
		printf("===== after ===\n");
	printf("A : ");
	ps_dlstprint(data->a);
	printf("B : ");
	ps_dlstprint(data->b);
	if (flag == 2)
		printf("result : [%d]\n", data->count);
}

int		n_print_dlst_detail(t_stack *stack)
{
	int	ix;
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
		{
			printf("index = [%d]\n", ix);
			printf("value = [%d]\n", ptr->value);
			printf("rank = [%d]\n", ptr->rank);
			printf("next value = [%d]\n", ptr->next->value);
		}
		else
		{
			printf("index [%d]\n", ix);
			printf("value = [%d]\n", ptr->value);
			printf("rank = [%d]\n", ptr->rank);
			printf("next value = [%d]\n", ptr->next->value);
		}
		ptr = ptr->next;
		ix++;
	}
	printf("\n");
	return (EXIT_SUCCESS);
}

int main(int argc, char **argv)
{
	t_bucket *data;

	data = ps_bucketnew();
	fn_validate_input(argc, argv, data);
	fn_print_stack(data, 1);
	fn_push_swap(data);
	fn_print_stack(data, 2);
	return (0);
}