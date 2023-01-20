/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:44:00 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:44:01 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;
	char	*s2;

	s1 = (char *)haystack;
	s2 = (char *)needle;
	i = 0;
	j = 0;
	if (ft_strlen(s2) == 0)
		return (s1);
	while (i < len && s1[i])
	{
		j = 0;
		while (i + j < len && s1[i + j] == s2[j] && s2[j])
			++j;
		if (s2[j] == '\0')
			return (s1 + i);
		++i;
	}
	return (NULL);
}
