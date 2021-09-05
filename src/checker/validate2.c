/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:47:48 by jekim             #+#    #+#             */
/*   Updated: 2021/09/05 19:57:38 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	fn_set_argv(int argc, char **argv, t_bucket *data)
{
	int		ix;
	int		jx;
	int		zx;
	char	**tmp;

	zx = 0;
	ix = 1;
	data->input_arr_str = (char **)ft_calloc(sizeof(char *), 10000);
	if (argc <= 1)
		return (ft_strerr("Error\n"));
	while (ix < argc)
	{
		jx = 0;
		tmp = ft_split(argv[ix], ' ');
		while (tmp[jx])
			data->input_arr_str[zx++] = tmp[jx++];
		free(tmp);
		ix++;
	}
	data->arg_size = zx;
	return (0);
}
