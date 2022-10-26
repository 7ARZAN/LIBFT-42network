/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 06:51:20 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/26 07:08:24 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (!current)
	{
		*lst = new;
		return ;
	}
	while (current)
	{
		if (current->next)
			current = current->next;
		else
		{
			current->next = new;
			break ;
		}
	}
}
/*
int main()
{
	t_list	*A;
	t_list	*B;
	t_list	*head;

	A = ft_lstnew("aaaaa");
	B = ft_lstnew("bbbbb");
	head = A;
	ft_lstadd_back(&head,B);
	while (head)
	{
		printf("%s->", head->content);
		head = head->next;
	}
}
*/
