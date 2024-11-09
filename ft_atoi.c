/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mac <mac@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:52:20 by mbouyi            #+#    #+#             */
/*   Updated: 2024/11/09 15:18:19 by mac              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	result;

	int (i), (sign);
	sign = 1;
	i = 0;
	result = 0;
	if (!nptr)
		return (0);
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return ((int)(result * sign));
}
/*int main(){
	char *num = "-1237490";
	int n = ft_atoi(num);
	printf("%d\n",n);
	return (0);
}*/
/*void	test_ft_atoi(const char *str)
{
	int	result;

	result = ft_atoi(str);
	int expected = atoi(str); // Standard atoi for comparison
	printf("Testing: \"%s\"\n", str);
	printf("ft_atoi result: %d\n", result);
	printf("Expected result (atoi): %d\n", expected);
	if (result == expected)
		printf("Test PASSED\n\n");
	else
		printf("Test FAILED\n\n");
}

int main()
{
	// Test with a plus sign and spaces
	test_ft_atoi("   +12345");
	test_ft_atoi("   +0");
	test_ft_atoi("   + 123");
		// This should handle the case where there is a space after the plus sign
	test_ft_atoi("   12345");
	test_ft_atoi("   -9876");
	test_ft_atoi(" + 1000");  // This is an invalid case,
		but you should decide how you want to handle it

	// Test with some other cases
	test_ft_atoi("-12345");
	test_ft_atoi("0");
	test_ft_atoi(" 0 ");
	test_ft_atoi("   +0");
	test_ft_atoi("  + 1000"); // Invalid input with spaces after plus sign

	return (0);
}*/
