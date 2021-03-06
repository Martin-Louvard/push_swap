/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malouvar <malouvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:10:36 by malouvar          #+#    #+#             */
/*   Updated: 2022/01/03 17:59:57 by malouvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *nptr)
{
	long	result;
	int		i;
	long	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (nptr[i] != 0 && (nptr[i] == 32 || nptr[i] == ' ' || nptr[i]
			== '\t' || nptr[i] == '\n' || nptr[i] == '\r' || nptr[i]
			== '\v' || nptr[i] == '\f'))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] && nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = (result * 10) + nptr[i] - 48;
		i++;
	}
	return (result * sign);
}
