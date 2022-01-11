/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:55:05 by malouvar          #+#    #+#             */
/*   Updated: 2022/01/04 13:56:15 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_index_2(int *array, t_list **a, int argc)
{
	t_list	*current;
	int		i;

	quicksort(array, 0, argc - 1);
	current = *a;
	while (current)
	{
		i = 0;
		while (array[i] != current->num)
			i++;
		current->i = i;
		current = current->next;
	}
}

int	add_to_list_2(int *array, int i, long temp, t_list **a)
{
	t_list	*new;

	array[i] = (int)temp;
	new = ft_lstnew((int)temp);
	if (!new)
		return (0);
	ft_lstadd_back(a, new);
	return (1);
}

int	has_errors_arg2(char **argv, int argc, t_list **a)
{
	int		i;
	long	temp;
	int		*array;

	array = malloc(sizeof(int) * (argc));
	if (!array)
		return (1);
	i = 0;
	while (i < argc)
	{
		if (is_invalid(argv[i]))
			return (free(array), 1);
		else
			temp = ft_atol(argv[i]);
		if (temp > 2147483647 || temp < -2147483648 || is_dup(*a, (int)temp))
			return (free(array), 1);
		else if (!(add_to_list_2(array, i, temp, a)))
			return (free(array), 1);
		i++;
	}
	add_index_2(array, a, argc);
	return (free(array), 0);
}
