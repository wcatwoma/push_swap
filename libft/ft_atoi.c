/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:40:36 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:40:38 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long long	res;
	int			is_neg;

	is_neg = 0;
	res = 0;
	while (ft_is_space(*str) == 1)
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_neg = (is_neg + 1) % 2;
		++str;
	}
	while (*str == '0')
		++str;
	while (res <= MAX_INT && ft_isdigit(*str))
	{
		res *= 10;
		res += *str - '0';
		++str;
	}
	if (is_neg)
		return (ft_tern_i((-res < MIN_INT), 0, -res));
	return (ft_tern_i((res > MAX_INT), -1, res));
}
