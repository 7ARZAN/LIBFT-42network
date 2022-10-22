/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:02:35 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/22 00:36:48 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*next;

	len = 0;
	next = lst;
	while (next != NULL)
	{
		next = next->next;
		len++;
	}
	return (len);
}
/*
int main()
{
	t_list	*a;
	t_list	*b;
	t_list	*head;

	a = ft_lstnew("TARZAN ");
	b = ft_lstnew("Houscein");
	a->next = b;
	head = a;
	printf("%d", ft_lstsize(head));
}
*/
