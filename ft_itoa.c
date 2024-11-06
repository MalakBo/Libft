/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:27:42 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/05 01:51:02 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int number)
{
	int	count;

	count = 0;
	if ((number <= 0))
		count++;
	while (number)
	{
		number = number / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*s;
	long int	number;

	number = n;
	if (n < 0)
		number *= -1;
	len = ft_count_digits(n);
	s = malloc(sizeof(char) * len + 1);
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	while (len--)
	{
		s[len] = (number % 10) + '0';
		number = number / 10;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
/*int main(){
	int num;
	num = -2147483648LL;
	char *s = ft_itoa(num);
	printf("%s\n",s);
	return (0);
}*/
/*int main(){
	int num;
	num = 0;
	char *s = ft_itoa(num);
	printf("%s\n",s);
	return (0);
}*/