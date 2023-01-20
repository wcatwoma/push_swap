/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:42:46 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:42:47 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			size;
	long long	cp;
	char		arr[12];

	if (n == MIN_INT)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	size = 0;
	cp = ft_ternar_ll((n < 0), (long long)(-n), (long long)n);
	if (cp == 0)
		write(fd, "0", 1);
	else
	{
		if (n < 0)
			write(fd, "-", 1);
		while (cp)
		{
			arr[size++] = cp % 10 + '0';
			cp /= 10;
		}
		while (size)
			write(fd, &arr[--size], 1);
	}
}
