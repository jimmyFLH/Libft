/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmyfleisch <jimmyfleisch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:11:53 by jimmyfleisc       #+#    #+#             */
/*   Updated: 2022/10/19 23:55:26 by jimmyfleisc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    unsigned    size;
	size_t c;
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	dst_len = ft_strlen(src);
	c = size;

	while (*dst)
	{
		dst++;
		if (c < 0)
			c--;
	}
	while (*src && c > 1)
	{
		*dst++ = *src++;
		c--;
	}
	*dst = '\0';
	if (size > dst_len)
		return (dst_len + src_len);
	return (size + src_len);
}