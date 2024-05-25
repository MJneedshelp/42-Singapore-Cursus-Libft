/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:30:16 by mintan            #+#    #+#             */
/*   Updated: 2024/05/25 15:39:49 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

int	main(void)
{
	int		fd;
	int		sz_rd;
	char	*buf_rd1;
	int		n1 = 0;
	int		n2 = 1;
	int		n3 = -234;
	int		n4 = -4562189;
	int		n5 = 2147483647;
	int		n6 = -2147483648;

	buf_rd1 = (char *)ft_calloc(100, sizeof(char));
	fd = open("test_ft_putchar_fd", O_RDWR | O_CREAT);
	printf("Opened file. fd: %d\n", fd);
	sz_rd = read(fd, buf_rd1, 100 * sizeof(char));
	printf("First Read file. No. bytes: %d\n", sz_rd);
	buf_rd1[sz_rd] = '\0';
	printf("Contents: %s\n", buf_rd1);
	
	printf("Current n: %d\n", n1);
	ft_putnbr_fd(n1, fd);
	ft_putchar_fd('\n', fd);

	printf("Current n: %d\n", n2);
	ft_putnbr_fd(n2, fd);
	ft_putchar_fd('\n', fd);

	printf("Current n: %d\n", n3);
	ft_putnbr_fd(n3, fd);
	ft_putchar_fd('\n', fd);

	printf("Current n: %d\n", n4);
	ft_putnbr_fd(n4, fd);
	ft_putchar_fd('\n', fd);

	printf("Current n: %d\n", n5);
	ft_putnbr_fd(n5, fd);
	ft_putchar_fd('\n', fd);

	printf("Current n: %d\n", n6);
	ft_putnbr_fd(n6, fd);
	ft_putchar_fd('\n', fd);

	lseek(fd, 0, SEEK_SET);
	sz_rd = read(fd, buf_rd1, 100 * sizeof(char));
	printf("Read file again. No. bytes: %d. Contents:\n%s\n", sz_rd, buf_rd1);
	close (fd);
	printf("Closed the file.\n");
	return (0);
}
