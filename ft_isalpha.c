/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:43:22 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/19 00:08:53 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*
int main ()
{
	printf("%d\n",ft_isalpha('5'));
    printf("%d\n",ft_isalpha('H'));
    printf("%d\n",ft_isalpha('&'));
    printf("%d\n",ft_isalpha('b'));
    printf("%d\n",ft_isalpha(0));
}
*/
