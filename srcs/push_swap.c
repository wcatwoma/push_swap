/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:39:54 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:39:57 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted_stack(t_stack *st)
{
	t_stack	*el;

	el = st;
	while (el)
	{
		if (!(el->next))
			break ;
		if (el->data > el->next->data)
			return (0);
		el = el->next;
	}
	return (1);
}

int	sort_little(t_stacks *strct)
{
	if (strct->count_a == 1 || strct->count_a == 2)
	{
		if (strct->count_a == 2)
			sa(strct, 1);
		return (1);
	}
	else if (strct->count_a == 3 && !sort_3_els(strct))
		return (0);
	else if (strct->count_a == 4)
	{
		if (!index_stack(strct))
			return (0);
		if (!sort_4_els(strct, 1))
			return (0);
	}
	else if (strct->count_a == 5)
	{
		if (!index_stack(strct))
			return (0);
		if (!sort_5_els(strct, 1))
			return (0);
	}
	return (1);
}

int	push_swap(t_stacks *strct)
{
	if (is_sorted_stack(strct->a))
		return (1);
	if (strct->count_a >= 1 && strct->count_a <= 5)
	{
		if (!sort_little(strct))
			return (0);
	}
	else
	{
		if (!sort_big(strct))
			return (0);
	}
	return (1);
}
