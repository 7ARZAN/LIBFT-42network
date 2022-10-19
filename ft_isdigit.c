/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:54:43 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/18 23:38:33 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main()
{
	printf("%d\n",ft_isdigit('5'));
    printf("%d\n",ft_isdigit('H'));
    printf("%d\n",ft_isdigit('&'));
    printf("%d\n",ft_isdigit(200));
    printf("%d\n",ft_isdigit(0));
}
*/
