/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:43:31 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:43:32 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*s;
	int		i;

	i = 0;
	size = ft_strlen(s1);
	s = (char *)malloc((size + 1) * sizeof(char));
	if (!s)
		return (NULL);
	else
	{
		while (s1[i])
		{
			s[i] = s1[i];
			++i;
		}
	}
	s[i] = '\0';
	return (s);
}
