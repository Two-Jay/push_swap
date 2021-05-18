/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:27:46 by jekim             #+#    #+#             */
/*   Updated: 2021/05/18 22:00:50 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/dlst.h"
#include "../../libft/libft.h"


int ft_insert_elems(t_bucket *bucket, int argc, char **argv)
{
	int cnt;

	cnt = 0;
	while (cnt < (argc - 1))
	{
		
	}
}

int ft_handle_stderr(char *errstr)
{
	write(1, errstr, ft_strlen(errstr));
	exit(EXIT_FAILURE);
	return (EXIT_FAILURE);
}

int	ft_validate_params(int argc, char **argv)
{
	int ix;
	int jx;

	if (argc <= 1)
	{
		exit(EXIT_FAILURE);
		return (EXIT_FAILURE);
	}
	ix = 1;
	jx = 0;
	while (argv[ix])
	{
		while (argv[ix][jx])
		{
			if (!(argv[ix][0] == '-' && !(argv[ix][jx] >= '0' && argv[ix][jx] <= '9')))
				ft_handle_stderr("Error\n");
			jx++;
		}
		ix++;
	}
	return (0);
}