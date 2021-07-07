/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/06 23:20:12 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"



int ft_validate_input(int argc, char **argv, int *arr)
{
	unsigned int ix;

	ix = 1;
	if (argc == 1)
		ft_strerr("Error\n : a few parameters\n");
	while (ix < argc)
	{
		if (//lenght check || //atoi-able check)
			arr[ix - 1] = ft_atoi(argv[ix]);
		else
			ft_strerr("Error\n : an invalid parameter exists in the input. \n");
	}
}


int main(int argc, char **argv)
{
	static int *arr_input;
	t_bucket *bucket;

	write(1, "check push_swap", 16);
}