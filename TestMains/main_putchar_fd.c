/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 10:30:16 by mintan            #+#    #+#             */
/*   Updated: 2024/05/25 12:07:47 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

int	main(void)
{
	int		fd;
	int		sz_rd;
	char	*buf_rd1;
	char	*buf_rd2;

	buf_rd1 = (char *)ft_calloc(100, sizeof(char));
	buf_rd2 = (char *)ft_calloc(100, sizeof(char));
	fd = open("test_ft_putchar_fd", O_RDWR | O_CREAT);
	printf("Opened file. fd: %d\n", fd);
	sz_rd = read(fd, buf_rd1, 100 * sizeof(char));
	printf("First Read file. No. bytes: %d\n", sz_rd);
	buf_rd1[sz_rd] = '\0';
	printf("Contents: %s\n", buf_rd1);
	ft_putchar_fd('c', fd);
	lseek(fd, 0, SEEK_SET);
	sz_rd = read(fd, buf_rd1, 100 * sizeof(char));
	printf("Read file again. No. bytes: %d. Contents: %s\n", sz_rd, buf_rd1);
	close (fd);
	printf("Closed the file.\n");
	return (0);
}
