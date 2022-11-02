/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:19:32 by jboucher          #+#    #+#             */
/*   Updated: 2022/11/01 16:22:15 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	slen;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	slen = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = ft_calloc(slen, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcat(str, (char *)s1, slen);
	ft_strlcat(str, (char *)s2, slen);
	return (str);
}
