/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:21:09 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/22 00:41:01 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list	*a;
	t_list	*b;
	t_list	*head;

	a = ft_lstnew("TARZAN");
	b = ft_lstnew("BIBA KHAWA DIALY");
	head = a;

	ft_lstadd_front(&head, b);
	while (head)
	{
		printf("%s", head->content);
		head = head->next;
	}
}
*/
