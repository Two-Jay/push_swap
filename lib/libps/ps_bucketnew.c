/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_bucketnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <jekim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:32:56 by jekim             #+#    #+#             */
/*   Updated: 2021/06/29 16:33:33 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

static void	ft_bzero(void *dst, size_t n)
{
	unsigned char *temp;

	if (!dst)
		return ;
	temp = dst;
	while (n--)
	{
		*temp++ = 0;
	}
}

static void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (!(ptr = malloc(count * size)))
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}

t_bucket	*ps_bucketnew(void)
{
	t_bucket	*bucket;
	t_stack		*a;
	t_stack		*b;

	bucket = (t_bucket *)ft_calloc(1, sizeof(t_bucket));
	if (!bucket)
		exit(EXIT_FAILURE);
	a = (t_stack *)ft_calloc(1, sizeof(t_stack));
	b = (t_stack *)ft_calloc(1, sizeof(t_stack));
	if (!a || !b)
		exit(EXIT_FAILURE);
	bucket->a = a;
	bucket->b = b;
	return (bucket);
}