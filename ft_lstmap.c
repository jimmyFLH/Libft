/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 19:46:52 by jboucher          #+#    #+#             */
/*   Updated: 2022/11/28 17:22:18 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;
	t_list		*new_node;

	if (!lst)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	new_node = new;
	while (lst->next)
	{
		lst = lst->next;
		new_node->next = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		new_node = new_node->next;
	}
	return (new);
}
