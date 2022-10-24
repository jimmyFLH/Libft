/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:50:23 by jboucher          #+#    #+#             */
/*   Updated: 2022/10/24 16:32:56 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int src, size_t len)

{
	unsigned char	*dst_cpy;

	dst_cpy = (unsigned char *)dest;
	while (len--)
		*dst_cpy++ = (unsigned char)src;
	return (dest);
}
