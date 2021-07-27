/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jekim <arabi1549@naver.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/01 01:02:23 by jekim             #+#    #+#             */
/*   Updated: 2021/07/28 03:02:24 by jekim            ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char	*ret;

	if (!src)
		return (NULL);
	if (!(ret = (char *)malloc(len + 1)))
		return (NULL);
	while (len--)
	{
		*(ret++) = src[start++];
	}
	*ret = '\0';
	return (ret);
}
