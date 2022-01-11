/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:09:00 by malouvar          #+#    #+#             */
/*   Updated: 2022/01/05 14:10:15 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	a_is_sorted(t_list *a)
{
	t_list	*previous;

	while (a->next)
	{
		previous = a;
		a = a->next;
		if (a->num < previous->num)
			return (0);
	}
	return (1);
}

void	sort_stack(t_list *a, t_list *b)
{
	int	size;

	size = ft_lstsize(a);
	if (size == 2)
		sa(&a, 0);
	else if (size == 3)
		sort_3(&a);
	else if (size == 4)
		sort_4(&a, &b);
	else if (size == 5)
		sort_5(&a, &b);
	else
		sort_radix(a, b, ft_lstsize(a), 0);
}

int	create_stack(char *arg_str, t_list **a)
{
	char	**args;
	int		argc;

	args = ft_split(arg_str, ' ');
	argc = 0;
	while (args[argc])
		argc++;
	if (has_errors_arg2(args, argc, a))
	{
		free_args(args);
		ft_lstclear(a);
		ft_putstr_fd("Error\n", 2);
		return (0);
	}
	free_args(args);
	return (1);
}

int	sort(t_list **a, t_list **b, t_list **first)
{
	if (a_is_sorted(*a))
	{
		ft_lstclear(a);
		return (0);
	}
	sort_stack(*a, *b);
	ft_lstclear(first);
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	t_list	*first;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		if (!create_stack(argv[1], &a))
			return (1);
	}
	else
	{
		if (has_errors(argv, argc, &a))
		{
			ft_lstclear(&a);
			ft_putstr_fd("Error\n", 2);
			return (1);
		}
	}
	first = find_first(a);
	return (sort(&a, &b, &first));
}
