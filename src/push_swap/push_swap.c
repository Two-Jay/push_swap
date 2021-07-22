/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/22 21:30:09 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int fn_print_input(t_bucket *data)
{
	int ix;
	int value;

	ix = 0;
	while (ix < data->size)
	{
		value = data->input_arr[ix];
		printf("%d ", value);
		ix++;
	}
	printf("\n");
	return (0);
}

void fn_print_stack(t_bucket *data, int flag)
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

int ps_test(int count, void (*test_fn)(t_bucket *), t_bucket *data)
{
	int ix;
	void (*fp)(t_bucket *);

	ix = 0;
	fp = test_fn;
	while (ix < count)
	{
		fp(data);
		printf("=======[%d]\n", ix);
		fn_print_stack(data, 0);
		ix++;
	}
	return (0);
}

int		fn_print_dlst_detail(t_stack *stack)
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
			printf("index = [%d]\n", ix);
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

	data = ps_bucketnew(argc - 1);
	fn_validate_input(argc, argv, data);
	fn_push_swap(data);
	fn_print_stack(data, 2);
	return (data->count);
}