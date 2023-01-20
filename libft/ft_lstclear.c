/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:41:33 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:41:36 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	ptr = NULL;
	if ((*del) && lst && *lst)
	{
		while (lst && *lst)
		{
			ptr = (*lst)->next;
			ft_lstdelone(*lst, (*del));
			*lst = ptr;
		}
	}
}
