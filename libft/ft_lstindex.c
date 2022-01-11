/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:17:36 by malouvar          #+#    #+#             */
/*   Updated: 2022/01/03 18:00:59 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstindex(t_list *lst, int index)
{
	int	i;

	i = 1;
	while (lst && i < index)
	{
		if (!lst->next)
			return (NULL);
		lst = lst->next;
		i++;
	}
	return (lst);
}
