/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:07:53 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/05 19:09:59 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number *= -1;
	}
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd(number % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(number + '0', fd);
	}
}
/*int main(void){
	int fd = open("output2.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putnbr_fd(1000, fd);
	return (0);
}*/
