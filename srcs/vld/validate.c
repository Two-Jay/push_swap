/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 17:27:46 by jekim             #+#    #+#             */
/*   Updated: 2021/05/19 13:57:04 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include "../../include/dlst.h"
#include "../../libft/libft.h"

int ft_isdigit_C(char *arg)
{
	if (!arg)
		return (EXIT_FAILURE);
	if (*target != '+' && *target != '-')
		return (EXIT_FAILURE);
	while(*target)
	{
		if (!ft_isalnum(*target))
			return (EXIT_FAILURE);
		target++;
	}
	return (EXIT_SUCCESS);
}

// TODO
// 0. check with ft_isdigit_C
// 1. ft_atoi with seperatied input;
// 2. insert with 1 as a value of newnode;
// 3. free memories of argument as char **data;
// input : char *
int		ft_check_and_insert(char **buf)
{
	t_dlst	node;
	int		ix;
	int		value;

	ix = 0;
	while (buf[ix])
	{
		if (ft_isdigit_C(buf[ix]) == EXIT_FAILURE)
			return (EXIT_FAILURE);
		value = ft_atoi(buf[ix]);
		node = ft_dlstnew(value);	
		if (// insert newnode to Stack B here and check return value for error handling)
			return (EXIT_FAILURE);
		free(buf[ix++]);
	}
	free(buf[ix]);
	free(buf);
	return (EXIT_SUCCESS);
}

int		ft_validate_params(int argc, char **argv)
{
	char	**buf;
	int		arg_cnt;

	arg_cnt = 0;
	while (arg_cnt + 1 < argc)
	{
		buf = ft_split(++argv[arg_cnt], ' ');
		if (!result || ft_check_and_insert(buf) == EXIT_FAILURE)
			return (EXIT_FAILURE);
		arg_cnt++;
	}
	return (EXIT_SUCCESS);
}