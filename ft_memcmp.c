/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:04:58 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/18 23:58:09 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*frst;
	unsigned char	*scnd;
	int				i;

	i = 0;
	frst = (unsigned char *)s1;
	scnd = (unsigned char *)s2;
	while (n--)
	{
		if (frst[i] != scnd[i])
			return (frst[i] - scnd[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
        char k[] = "fallahi";
        char l[] = "fellahi";

        printf("%d\n",ft_memcmp(k,l,1));
}
*/
