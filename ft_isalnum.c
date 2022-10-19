/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:40:41 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/18 23:39:26 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d\n",ft_isalnum('5'));
    printf("%d\n",ft_isalnum('H'));
    printf("%d\n",ft_isalnum('&'));
    printf("%d\n",ft_isalnum(200));
    printf("%d\n",ft_isalnum(0));
}
*/
