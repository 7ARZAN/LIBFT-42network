/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:09:02 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/19 00:09:21 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	*s;

	a = 0;
	s = (unsigned char *) b;
	while (a < len)
	{
		s[a] = c;
		a++;
	}
	return (b);
}
/*
int main()
{
	    int t[4] = {2,4,2,5};
        int *r;
        r = ft_memset(t,32,6);
        int i = 0;
        while (i < 4)
        {
                printf("%d\n",r[i]);
                i++;
        }
}

    char str[50] = "Let us see a simple example in C";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str, '.', 4*sizeof(char));

    printf("After memset():  %s\n", str);

    char str1[50] = "Let us see a simple example in C";
    printf("\nBefore memset(): %s\n", str1);

    // Fill 8 characters starting from str[13] with '.'
    ft_memset(1000000, 68, 4*sizeof(char));

    printf("After memset():  %s\n", str1);

*/
