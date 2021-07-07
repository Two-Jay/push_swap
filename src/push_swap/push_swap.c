/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/08 04:20:54 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include <stdio.h>

// checked!
int ft_validate_input(int argc, char **argv, int *arr)
{
	int	ix;
	int	err_flag;

	ix = 0;
	if (argc == 1)
	ft_strerr("Error\n : a few parameters\n");
	arr = (int *)ft_calloc(sizeof(int), argc - 1);
	if (!arr)
		ft_strerr("Error\n:No memory");
	err_flag = 0;
	while (ix < argc - 1)
	{
		err_flag = ft_isable_strtonbr(argv[ix + 1]);
		if (!err_flag)
			arr[ix] = ft_atoi_covf(argv[ix + 1], &err_flag); // arr에 넣어 준 이후에, 노드 생성하고 A 스텍에 넣기			
		if (err_flag)
			ft_strerr("Error\n: an invalid param");
		ix++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int *arr_input;

	arr_input = NULL;
	ft_validate_input(argc, argv, arr_input);
	return (0);
}