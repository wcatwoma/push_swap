/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:42:06 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:42:08 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*ptr;

	size = 0;
	ptr = NULL;
	if (lst)
	{
		ptr = lst;
		while (ptr->next)
		{
			ptr = ptr->next;
			++size;
		}
		return (++size);
	}
	return (0);
}
