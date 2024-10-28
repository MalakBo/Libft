/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyi <mbouyi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:42:02 by mbouyi            #+#    #+#             */
/*   Updated: 2024/10/28 16:12:58 by mbouyi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int main() {
	/*char c = 'A'; // Character to print
	int fd = 0;   // File descriptor for standard output

	ft_putchar_fd(c, fd); // Call the function to print the character
	// Read a character from standard input (file descriptor 0)
	char c;
	read(0, &c, 1);

	// Print the character to standard output (file descriptor 1)
	ft_putchar_fd(c, 1);

	return (0);
}*/
