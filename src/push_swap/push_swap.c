/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/15 14:16:27 by jekim            ###   ########seoul.kr  */
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

void fn_print_stack(t_bucket *data)
{
	printf("A : ");
	ps_dlstprint(data->a);
	printf("B : ");
	ps_dlstprint(data->b);
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
		fn_print_stack(data);
		ix++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	t_bucket *data;

	data = ps_bucketnew(argc - 1);
	fn_validate_input(argc, argv, data);
	fn_print_stack(data);
	ps_test(5, &ps_inst_pb, data);
	ps_test(5, &ps_inst_rrb, data);
}
