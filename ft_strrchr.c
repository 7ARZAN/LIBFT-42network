/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:39:02 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/11 22:21:01 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;
	int	isfind;

	i = 0;
	isfind = 0;
	j = i;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			isfind = 1;
			j = i;
		}
		i++;
	}
	if (c == 0)
		return ((char *)(s + i));
	else if (isfind)
		return ((char *)(s + j));
	return (0);
}