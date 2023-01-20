/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ternar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:44:21 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:44:22 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tern_i(int cond, int ret_true, int ret_false)
{
	if (cond)
		return (ret_true);
	else
		return (ret_false);
}

double	ft_tern_d(int cond, double ret_true, double ret_false)
{
	if (cond)
		return (ret_true);
	else
		return (ret_false);
}

float	ft_ternar_f(int cond, float ret_true, float ret_false)
{
	if (cond)
		return (ret_true);
	else
		return (ret_false);
}

long long	ft_ternar_ll(int cond, long long ret_true, long long ret_false)
{
	if (cond)
		return (ret_true);
	else
		return (ret_false);
}
