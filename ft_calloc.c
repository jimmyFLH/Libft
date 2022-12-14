/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:24:37 by jboucher          #+#    #+#             */
/*   Updated: 2022/12/14 16:25:19 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*call;
	size_t	i;

	call = malloc(count * size);
	if (call == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < count * size)
	{
		call[i] = 0;
		i++;
	}
	return (call);
}
