/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmyfleisch <jimmyfleisch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:53:29 by jimmyfleisc       #+#    #+#             */
/*   Updated: 2022/10/19 21:53:37 by jimmyfleisc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memset(void *dest, int src, size_t len)

{
    unsigned char *dst_cpy;

	dst_cpy = (unsigned char*)dest;
	while (len--)
		*dst_cpy++ = (unsigned char)src;
	return (dest);
}