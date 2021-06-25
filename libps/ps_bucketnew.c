/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_bucketnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 23:32:56 by jekim             #+#    #+#             */
/*   Updated: 2021/06/26 01:37:47 by jekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps.h"

static size_t	ft_strlen(const char *src)
{
	const char *tmp;

	tmp = src;
	if (!src)
		return (0);
	while (*tmp++)
		;
	return (size_t)(tmp - src - 1);
}

static int		ft_strerr(char *err)
{
	write(1, err, ft_strlen(err));
	exit(EXIT_FAILURE);
}

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
		return (ft_strerr("bucket init error in _init_bucket_\n"));
	a = (t_stack *)ft_calloc(1, sizeof(t_stack));
	b = (t_stack *)ft_calloc(1, sizeof(t_stack));
	if (!a || !b)
		return (ft_strerr("stack init error in _init_bucket_\n"));
	bucket->a = a;
	bucket->b = b;
	return (bucket);
}