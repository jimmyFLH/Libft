/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmov.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmyfleisch <jimmyfleisch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:26:57 by jboucher          #+#    #+#             */
/*   Updated: 2022/10/19 22:52:41 by jimmyfleisc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *str1, const void *str2, size_t n)
{
	unsigned char *dst2;
	unsigned char *src2;

	dst2 = (unsigned char *)str1;
	src2 = (unsigned char *)str2;
	if (str2 < str1)
	{
		src2 = src2 + n - 1;
		dst2 = dst2 + n - 1;
		while (n--)
			*dst2-- = *src2--;
	}
	else if (str1 >= str2)
	{
		while (n--)
			*dst2++ = *src2++;
	}
	return (str1);
