/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 09:50:40 by malouvar          #+#    #+#             */
/*   Updated: 2022/01/03 17:33:29 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *stack)
{
	if (!stack)
		printf("empty\n");
	while (stack)
	{
		printf("%d\n", stack->num);
		stack = stack->next;
	}
}
