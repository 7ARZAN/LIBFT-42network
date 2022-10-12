/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:58:56 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/11 18:11:36 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (!s)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!ret)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		*ret = '\0';
		return (ret);
	}
	while (i < len)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[len] = '\0';
	return (ret);
}
/*
#include <stdio.h>

int main()
{
	char	*str = "i just want this part #############";
        
	char	*ret = ft_substr(str, 0, 22);
        printf("%s. \n",ret);
}
*/
