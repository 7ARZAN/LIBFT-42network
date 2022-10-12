/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:04:13 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/05 15:18:18 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			z;
	unsigned char	*string;
	unsigned char	chr;

	string = (unsigned char *)s;
	chr = (unsigned char)c;
	z = 0;
	while (z < n)
	{
		if (*string == chr)
			return (string);
		string++;
		z++;
	}
	return (0);
}
