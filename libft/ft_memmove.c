/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:42:29 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:42:31 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*str1;

	if (!len || dst == src)
		return (dst);
	i = 0;
	str1 = (unsigned char *)dst;
	if (dst > src)
		while (len--)
			*(char *)(str1 + len) = *(char *)(src + len);
	else
	{
		while (i < len)
		{
			*(char *)(str1 + i) = *(char *)(src + i);
			++i;
		}
	}
	return (dst);
}
