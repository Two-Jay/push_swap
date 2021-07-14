/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/14 16:19:19 by jekim            ###   ########seoul.kr  */
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
	printf("target : ");
	fn_print_input(data);
	printf("sorted : ");
	printf("%d\n", fn_is_sorted(data->input_arr, data->size));
}

int main(int argc, char **argv)
{
	t_bucket *data;

	data = ps_bucketnew(argc - 1);
	fn_validate_input(argc, argv, data);
	fn_print_stack(data);
	fn_bubblesort(data->input_arr, data->size);
	fn_print_stack(data);
}
