/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 21:45:10 by jekim             #+#    #+#             */
/*   Updated: 2021/05/19 15:13:04 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char ch)
{
	return (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\v'
			|| ch == '\f' || ch == '\r');
}

long long	ft_atoi(const char *nptr)
{
	long long	nbr;
	int			sign;
	int			ix;

	nbr = 0;
	ix = 0;
	sign = 1;
	while (nptr[ix] && ft_isspace(nptr[ix]))
		ix++;
	if (nptr[ix] == '-')
		sign = -1;
	if (nptr[ix] == '-' || nptr[ix] == '+')
		ix++;
	while (nptr[ix] && ('0' <= nptr[ix] && nptr[ix] <= '9'))
	{
		nbr = (nbr * 10) + (nptr[ix] - '0');
		ix++;
	}
	return (sign * nbr);
}


// you must validate the return value if it exceed the int type range;