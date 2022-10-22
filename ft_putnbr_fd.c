/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:36:26 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/21 20:19:19 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	x;

	x = n;
	if (x < 0)
	{
		x = -x;
		write(fd, "-", 1);
	}
	if (x <= 9)
	{
		x = x + 48;
		write(fd, &x, 1);
	}
	else
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putnbr_fd(x % 10, fd);
	}
}
/*
#include <fcntl.h>

int main()
{
	int	fd;

	fd = open("ft_putnbr_fd.txt", O_CREAT | O_RDWR);
	ft_putnbr_fd(541, fd);
}
*/
