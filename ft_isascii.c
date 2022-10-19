/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:48:37 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/18 23:40:50 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d\n",ft_isascii('5'));
    printf("%d\n",ft_isascii(-5));
    printf("%d\n",ft_isascii('~'));
    printf("%d\n",ft_isascii(200));
    printf("%d\n",ft_isascii(0));
}
*/
