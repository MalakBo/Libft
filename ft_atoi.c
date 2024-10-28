/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:52:20 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/28 16:29:08 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *nptr)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	i = 0;
	result = 0;
	if (!nptr)
		return (0);
	while (nptr[i] == 32 || nptr[i] >= 9 && nptr[i] <= 13)
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
	}
	else if (nptr[i] == '+')
	{
		i++;
	}
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - 48);
		i++;
	}
	return ((int)(result * sign));
}
