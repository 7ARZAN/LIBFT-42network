/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:22:02 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/19 00:03:56 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lenth1;
	size_t	lenth2;
	char	*result;

	lenth1 = ft_strlen(s1);
	lenth2 = ft_strlen(s2);
	result = malloc(lenth1 + lenth2 + 1);
	if (result)
	{
		ft_memcpy(result, s1, lenth1);
		ft_memcpy(result + lenth1, s2, lenth2 + 1);
	}
	return (result);
}
/*
#include <stdio.h>

int main()
{
	char	*s1 = "my favorite thing is ";
	char	*s2 = "profile ";
	char	*s3 = "DIAL 7ARZAN";
	printf("%s\n",ft_strjoin(ft_strjoin(s1, s2), s3));
}
*/
