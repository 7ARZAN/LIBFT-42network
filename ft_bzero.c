/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:38:04 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/19 00:08:31 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;
	size_t			i;

	a = s;
	i = 0;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}
/*
int main()
{
    int t[4] = { 5, 4, 3, 2};
    ft_bzero(t,6);
    int i = 0;
    while(i < 4)
    printf("%d\n",t[i++]);
}

{
        char str[10] = "mohammed";

        for (int i = 0; i < 10; i++)
		printf("%d", str[i]);
        bzero(str, 3);
        printf("\nbzero \n");
        for (int i = 0; i < 10; i++)
		printf("%d", str[i]);
        printf("\n");
        char str1[10] = "mohammed";

        for (int i = 0; i < 10; i++)
		printf("%d", str1[i]);
        printf("\nft_bzero\n");
        ft_bzero(str1, 3);
         for (int i = 0; i < 10; i++)
		printf("%d", str1[i]);
}
*/
