/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:07:27 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/18 23:49:19 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = len;
	if (!src && !dst)
		return (NULL);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int main()
{
	char *h = ft_strdup("Dans cette première partie");
        ft_memmove(h+4, h, 27);
	printf("%s\n", h+4 );


	char str1[] = "Geeks"; // Array of size 100
    char str2[] = "Quiz"; // Array of size 5

    puts("str1 before memmove ");
    puts(str1);





    Copies contents of str2 to sr1
    memmove(str1, str2, sizeof(str2));

    puts("\nstr1 after memmove ");
    puts(str1);

    int t[4] = {1,2,3};

    ft_memmove(t+2,t,sizeof(t));
    int i = 1;
       while (i < 4)
        {
                printf("%d\n",t[i++]);
		}
*/
