/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmyfleisch <jimmyfleisch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:20:18 by jboucher          #+#    #+#             */
/*   Updated: 2022/10/19 21:25:39 by jimmyfleisc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlcpy(char *dest, char *src, int dstsize)
{
	int	i;

	i = 0;
	while (src[i] != '\0' || i < dstsize)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
