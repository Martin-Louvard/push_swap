/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: malouvar <malouvar@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2021/12/14 12:03:06 by malouvar		  #+#	#+#			 */
/*   Updated: 2022/01/05 14:05:14 by malouvar         ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	add_index(int *array, t_list **a, int argc)
{
	t_list	*current;
	int		i;

	quicksort(array, 0, argc - 2);
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

int	add_to_list(int *array, int i, long temp, t_list **a)
{
	t_list	*new;

	array[i] = (int)temp;
	new = ft_lstnew((int)temp);
	if (!new)
		return (0);
	ft_lstadd_back(a, new);
	return (1);
}

int	has_errors(char **argv, int argc, t_list **a)
{
	int		i;
	long	temp;
	int		*array;

	i = 1;
	array = malloc(sizeof(int) * (argc - 1));
	if (!array)
		return (1);
	while (i < argc)
	{
		if (is_invalid(argv[i]))
			return (free(array), 1);
		else
			temp = ft_atol(argv[i]);
		if (temp > 2147483647 || temp < -2147483648 || is_dup(*a, (int)temp))
			return (free(array), 1);
		else if (!(add_to_list(array, i - 1, temp, a)))
			return (free(array), 1);
		i++;
	}
	add_index(array, a, argc);
	return (free(array), 0);
}
