/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <malouvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:16:22 by malouvar          #+#    #+#             */
/*   Updated: 2022/01/04 12:08:21 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_radix(t_list *a, t_list *b, int size, int max_bits)
{
	int	max_num;
	int	i;
	int	j;
	int	num;

	max_num = size - 1;
	i = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = a->i;
			if (((num >> i) & 1) == 1)
				ra(&a, 0);
			else
				pb(&a, &b);
			j++;
		}
		while (b)
			pa(&a, &b);
		i++;
	}
}
