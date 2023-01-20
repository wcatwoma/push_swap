/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:43:38 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:43:39 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst,
			const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (dstsize <= dst_size)
		return (dstsize + src_size);
	i = 0;
	while (i < dstsize - dst_size - 1 && src[i])
	{
		dst[i + dst_size] = src[i];
		++i;
	}
	dst[i + dst_size] = '\0';
	return (dst_size + src_size);
}
