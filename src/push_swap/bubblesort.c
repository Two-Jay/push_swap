/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:53:38 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 02:23:03 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	fn_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	fn_bubblesort(int *a, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - 1))
		{
			if (a[j] > a[j + 1])
				fn_swap(&a[j], &a[j + 1]);
			j++;
		}
		i++;
	}
	return (0);
}

int	fn_is_sorted(int *arr, int size)
{
	int	i;
	int	j;
	int	sorted;

	sorted = 1;
	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - 1))
		{
			if (arr[j] > arr[j + 1])
			{
				sorted = 0;
				break ;
			}
			j++;
		}
		i++;
	}
	return (sorted);
}
