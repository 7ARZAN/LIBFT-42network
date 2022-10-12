/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:37:16 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/11 16:47:07 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	zxc;
	size_t	n;

	zxc = 0;
	if (!haystack && !len)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[zxc] != '\0')
	{
		n = 0;
		while (haystack[zxc + n] == needle[n] && (zxc + n) < len)
		{
			if (haystack[zxc + n] == '\0' && (zxc + n) == '\0')
				return ((char *)&haystack[zxc]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + zxc);
		zxc ++;
	}
	return (0);
}
/*#include <stdio.h>
int main()
{
	        char	*s1 = "SASDASEAWEAFASEAS F F FF ";
	char	*s2 = "FF";
	size_t	max = strlen(s1);

	char	*i2 = ft_strnstr(s1, s2, max);
        printf("%s.\n",i2);
}*/
