/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:05:41 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/22 19:17:30 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	int a;
	int	b = 513;
	int *s = ft_memcpy(&a, &b, 1);
	printf("%d\n", s[0]);

	char str[] = "TARZANdhghfgh";
    char str1[] = "MALIK";
    printf("%s\n%s", str, str1);
}
*/
