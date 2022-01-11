/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:05:44 by malouvar          #+#    #+#             */
/*   Updated: 2022/01/03 17:52:23 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a, int rr)
{
	t_list	*temp;

	if (ft_lstsize(*a) < 2)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = NULL;
	ft_lstadd_back(a, temp);
	if (!rr)
		write(1, "ra\n", 3);
}

void	rb(t_list **b, int rr)
{
	t_list	*temp;

	if (ft_lstsize(*b) < 2)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = NULL;
	ft_lstadd_back(b, temp);
	if (!rr)
		write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	ra(a, 1);
	rb(b, 1);
	write(1, "rr\n", 3);
}

void	rra(t_list **a, int rrr)
{
	t_list	*temp;
	t_list	*prelast;

	if (ft_lstsize(*a) < 2)
		return ;
	prelast = ft_lstprelast(*a);
	temp = ft_lstlast(*a);
	prelast->next = NULL;
	ft_lstadd_front(a, temp);
	if (!rrr)
		write(1, "rra\n", 4);
}

void	rrb(t_list **b, int rrr)
{
	t_list	*temp;
	t_list	*prelast;

	if (ft_lstsize(*b) < 2)
		return ;
	prelast = ft_lstprelast(*b);
	temp = ft_lstlast(*b);
	prelast->next = NULL;
	ft_lstadd_front(b, temp);
	if (!rrr)
		write(1, "rrb\n", 4);
}
