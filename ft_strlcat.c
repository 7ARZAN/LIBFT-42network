/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:26:07 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/21 17:56:00 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lnth;
	size_t	i;
	size_t	len;

	lnth = ft_strlen(dst);
	len = ft_strlen(src);
	if (dstsize <= lnth)
		len += dstsize;
	else
		len += lnth;
	i = 0;
	while (src[i] != '\0' && lnth + 1 < dstsize)
	{
		dst[lnth] = src[i];
		lnth++;
		i++;
	}
	dst[lnth] = '\0';
	return (len);
}
/*
#include <stdio.h>

int main()
{
	    char s1[30] = "Dans cette premiere partie";
        char s2[10] = "fallahi";
        printf("len s1 %ld\n", ft_strlen(s1));
        printf("len s2 %ld\n", ft_strlen(s2));
        printf("%zu\n", ft_strlcat(s2, s1, 7));
}
*/
