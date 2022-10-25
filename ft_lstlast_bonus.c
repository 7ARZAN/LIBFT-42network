/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elakhfif <elakhfif@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 06:57:19 by elakhfif          #+#    #+#             */
/*   Updated: 2022/10/25 06:57:22 by elakhfif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*nxt;

	nxt = lst;
	while (nxt)
	{
		if (nxt->next)
			nxt = nxt->next;
		else
			return (nxt);
	}
	return (NULL);
}
