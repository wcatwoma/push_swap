/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcatwoma <wcatwoma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 23:39:22 by wcatwoma          #+#    #+#             */
/*   Updated: 2021/07/22 23:39:25 by wcatwoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stacks *strct, int print_sig)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	if (strct->count_a <= 1)
		return ;
	tmp = strct->a;
	tmp1 = strct->a;
	while (tmp1->next)
		tmp1 = tmp1->next;
	strct->a = strct->a->next;
	tmp1->next = tmp;
	tmp->next = NULL;
	if (print_sig)
	{
		++strct->count_acts;
		ft_putstr_fd("ra\n", 1);
	}
}

void	rb(t_stacks *strct, int print_sig)
{
	t_stack	*tmp;
	t_stack	*tmp1;

	if (strct->count_b <= 1)
		return ;
	tmp = strct->b;
	tmp1 = strct->b;
	while (tmp1->next)
		tmp1 = tmp1->next;
	strct->b = strct->b->next;
	tmp1->next = tmp;
	tmp->next = NULL;
	if (print_sig)
	{
		++strct->count_acts;
		ft_putstr_fd("rb\n", 1);
	}
}

void	rr(t_stacks *strct, int print_sig)
{
	ra(strct, 0);
	rb(strct, 0);
	if (print_sig)
	{
		++strct->count_acts;
		ft_putstr_fd("rr\n", 1);
	}
}
