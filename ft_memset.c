/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:09:02 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/21 19:14:48 by elakhfif         ###   ########.fr       */
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
	    int t[5] = {1,2,4,2,5};
        int *r;
        r = ft_memset(t,10,4);
        int i = 0;
        while (i < 5)
        {
                printf("%d\n",r[i]);
                i++;
        }

    char str[50] = "Let us see a simple example in C";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str, '.', 4*sizeof(char));

    printf("After memset():  %s\n", str);

    char str1[50] = "Let us see a simple example in C";
    printf("\nBefore memset(): %s\n", str1);
}
*/
