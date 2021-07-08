/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/08 22:12:35 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include <stdio.h>

// duplicated input check, if err return 1, or if not 0
// void	fn_check_dupvalue(int value, t_stack *stack)
// {
	
// }

void	fn_insert_node(char *str, int ix, int *err_flag, t_bucket *bucket)
{
	t_dlst *node;
	int value;

	value = ft_atoi_covf(str, err_flag);
	node = ps_dlstnew(value);
	ps_dlstadd_back(bucket->a, node);
	bucket->input_arr[ix] = value;
	bucket->size++;
	bucket->a->size++;
}

int fn_validate_input(int argc, char **argv, t_bucket *bucket)
{
	int	ix;
	int	err_flag;

	ix = 0;
	err_flag = 0;
	if (argc == 1)
	ft_strerr("Error\n : a few parameters\n");
	bucket->input_arr = (int *)ft_calloc(sizeof(int), argc - 1);
	if (!bucket->input_arr)
		ft_strerr("Error\n:No memory");
	while (ix < argc - 1)
	{
		err_flag = ft_isable_strtonbr(argv[ix + 1]);
		if (!err_flag)
			fn_insert_node(argv[ix + 1], ix, &err_flag, bucket);// arr에 넣어 준 이후에, 노드 생성하고 A 스텍에 넣기
		if (err_flag)
			ft_strerr("Error\n: an invalid param");
		ix++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	t_bucket *bucket;
	int ix;

	ix = 0;
	bucket = ps_bucketnew();
	fn_validate_input(argc, argv, bucket);
	ps_dlstprint(bucket->a);
	return (0);
}