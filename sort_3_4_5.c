/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_4_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <malouvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:26:42 by malouvar          #+#    #+#             */
/*   Updated: 2022/01/05 14:09:36 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_list **a)
{
	int	f;
	int	s;
	int	t;

	f = (*a)->num;
	s = (*a)->next->num;
	t = (*a)->next->next->num;
	if (f < s && f < t && s > t)
	{
		rra(a, 0);
		sa(a, 0);
	}
	else if (f > s && f > t && s > t)
	{
		sa(a, 0);
		rra(a, 0);
	}
	else if (f > s && f < t)
		sa(a, 0);
	else if (f > s && f > t)
		ra(a, 0);
	else if (f < s && f > t)
		rra(a, 0);
}

void	sort_4(t_list **a, t_list **b)
{
	if ((*a)->next->i == 0)
		sa(a, 0);
	else if ((*a)->next->next->i == 0)
	{
		rra(a, 0);
		rra(a, 0);
	}
	else if ((*a)->next->next->next->i == 0)
		rra(a, 0);
	pb(a, b);
	sort_3(a);
	pa(a, b);
}

void	sort_5(t_list **a, t_list **b)
{
	if ((*a)->next->i == 4 || (*a)->next->next->i == 4)
	{
		while ((*a)->i != 4)
			ra(a, 0);
	}
	else
	{
		while ((*a)->i != 4)
			rra(a, 0);
	}
	pb(a, b);
	sort_4(a, b);
	pa(a, b);
	ra(a, 0);
}
