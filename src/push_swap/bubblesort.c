/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 18:53:38 by jekim             #+#    #+#             */
/*   Updated: 2021/07/12 01:03:26 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void fn_swap(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int fn_bubblesort(int *arr, int size)
{
	int i;
	int j;
	int flag;

	i = 0;
	flag = 1;
	while (i < size && flag)
	{
		flag = 0;
		j = i + 1;
		while (j < size)
		{
			if (arr[j] < arr[i])
			{
				fn_swap(&arr[i], &arr[j]);
				flag = 1;
			}
			j++;
		}
		i++;
	}
	return (0);
}
