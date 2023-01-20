/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:44:08 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:44:09 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)(s + s_len));
	while (s_len--)
	{
		if (s[s_len] == (char)c)
			return ((char *)(s + s_len));
	}
	return (NULL);
}
