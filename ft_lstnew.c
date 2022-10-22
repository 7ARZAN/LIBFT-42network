/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:52:23 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/22 00:27:27 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)(malloc(sizeof(t_list)));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
/*
int main()
{
	t_list	*a;
	t_list	*b;
	t_list	*head;

	a = ft_lstnew("tarzan");
	b = ft_lstnew("Houscein");

	a->next = b;
	head = a;
	while (head)
	{
		printf("%s", head->content);
		head = head->next;
	}
}
*/
