/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:03:13 by malouvar          #+#    #+#             */
/*   Updated: 2021/12/14 13:52:17 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*current;
	t_list	*previous;

	if (!lst)
		return ;
	current = *lst;
	while (current)
	{
		previous = current;
		current = current->next;
		free(previous);
	}
	*lst = NULL;
}
