/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:04:54 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/15 20:14:50 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		lenth;
	char	*str;
	long	nb;

	lenth = ft_numlen(n);
	str = malloc(sizeof(char) * lenth + 1);
	nb = n;
	if (!str)
		return (NULL);
	else if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str[lenth--] = '\0';
	while (nb)
	{
		str[lenth] = nb % 10 + 48;
		nb = nb / 10;
		lenth--;
	}
	return (str);
}
