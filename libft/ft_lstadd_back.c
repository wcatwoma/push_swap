/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:41:24 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:41:26 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *neww)
{
	t_list	*el;

	el = NULL;
	if (lst && neww)
	{
		if (*lst)
		{
			el = ft_lstlast(*lst);
			el->next = neww;
			neww->next = NULL;
		}
		else
		{
			*lst = neww;
			neww->next = NULL;
		}
	}
}
