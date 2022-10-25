/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 06:55:41 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/25 06:55:44 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*
void	del(void *content)
{
	free(content);
}

int main()
{
	t_list	*a;
	t_list	*b;
	t_list	*head;

	a = ft_lstnew(ft_strdup("TARZAN  RGRDFGDFG"));
	b = ft_lstnew(ft_strdup("FDGDFGDFG TARZAN"));
	a->next = b;
	head = a;
	ft_lstdelone(head, del);
	while (head)
	{
		printf("%s", head->content);
		head = head->next;
	}
}
*/
