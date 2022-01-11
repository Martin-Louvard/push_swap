/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:10:28 by malouvar          #+#    #+#             */
/*   Updated: 2022/01/05 14:10:53 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **stack, int ss)
{
	t_list	*next;
	t_list	*temp;

	if (ft_lstsize(*stack) <= 1)
		return ;
	next = (*stack)->next;
	temp = next->next;
	next->next = *stack;
	(*stack)->next = temp;
	*stack = next;
	if (!ss)
		write(1, "sa\n", 3);
}

void	sb(t_list **stack, int ss)
{
	t_list	*next;
	t_list	*temp;

	if (ft_lstsize(*stack) <= 1)
		return ;
	next = (*stack)->next;
	temp = next->next;
	next->next = *stack;
	(*stack)->next = temp;
	*stack = next;
	if (!ss)
		write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	sa(a, 1);
	sb(b, 1);
	write(1, "ss\n", 3);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if (ft_lstsize(*b) < 1)
		return ;
	temp = *b;
	*b = (*b)->next;
	ft_lstadd_front(a, temp);
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (ft_lstsize(*a) < 1)
		return ;
	temp = *a;
	*a = (*a)->next;
	ft_lstadd_front(b, temp);
	write(1, "pb\n", 3);
}
