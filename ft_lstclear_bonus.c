/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 06:55:03 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/25 06:55:06 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		del((*lst)->content);
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*
void del(void *content){

	printf("hadchi li mktoub: %s\n", content);
	free(content);
}

#include <stdio.h>
int main()
{

	t_list *finalnode = ft_lstnew(ft_strdup("TARZAN"));
	t_list *secondnode = ft_lstnew(ft_strdup("there"));
	t_list *firstnode = ft_lstnew(ft_strdup("hello"));
	t_list *head;
	t_list **lst;

	firstnode->next = secondnode;
	secondnode->next = finalnode;

	head = finalnode;
	lst = &head;

	printf("%s\n", firstnode->content);
	printf("%s\n", secondnode->content);
	printf("%s\n", finalnode->content);
	ft_lstclear(lst, del);
}
*/
