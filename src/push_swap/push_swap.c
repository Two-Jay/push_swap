/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:54:08 by jekim             #+#    #+#             */
/*   Updated: 2021/07/08 02:43:13 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ft_validate_input(int argc, char **argv, int *arr)
{
	unsigned int	ix;
	int				err_flag;

	ix = 1;
	err_flag = 0;
	if (argc == 1)
		ft_strerr("Error\n : a few parameters\n");
	while (argv[ix])
	{
		err_flag = ft_isable_strtonbr(argv[ix]))
		if (!err_flag)
			arr[ix - 1] = ft_atoi_covf(argv[ix], &err_flag);
		if (err_flag)
			ft_strerr("Error\n : an invalid parama");
		ix++;
	}
}

int main(int argc, char **argv)
{
	static int *arr_input;
	t_bucket *bucket;

	write(1, "check push_swap", 16);
}