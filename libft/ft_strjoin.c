/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:43:34 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:43:36 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*res;
	size_t		res_len;

	if (!s1)
		return (NULL);
	if (!s2)
		return ((char *)s1);
	res_len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * (res_len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, res_len + 1);
	ft_strlcat(res, s2, res_len + 1);
	return (res);
}
