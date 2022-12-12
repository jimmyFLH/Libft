/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:37:33 by jboucher          #+#    #+#             */
/*   Updated: 2022/12/12 11:39:42 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del)
	{
		if (*lst)
		{		
			while (*lst)
			{
				del((*lst)->content);
				temp = (*lst);
				(*lst) = temp->next;
				free(temp);
			}
		}
	}
	return ;
}
