/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:10:42 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/09 03:03:45 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		indx;
	int		len;
	char	*str;

	indx = 0;
	len = ft_strlen(s1);
	str = ((char *)malloc(sizeof(char) * (len +1)));
	if (str == NULL)
		return (NULL);
	while (indx < len)
	{
		str[indx] = s1[indx];
		indx++;
	}
	str[indx] = '\0';
	return (str);
}
