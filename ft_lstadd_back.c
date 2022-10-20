/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:19:25 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/20 21:24:53 by elakhfif         ###   ########.fr       */
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
