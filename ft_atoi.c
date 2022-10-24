/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboucher <jboucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:07:14 by jimmyfleisc       #+#    #+#             */
/*   Updated: 2022/10/24 13:11:50 by jboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	ctmin;
	int	numb;

	i = 0;
	ctmin = 1;
	numb = 0;
	while (ft_strchr(WHITE_SPACE, str[i]))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			ctmin *= -1;
			i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		numb = (str[i] - 48) + (numb * 10);
			i++;
		if (!(str[i] >= 48 && str[i] <= 57))
			return (numb * ctmin);
	}
	return (0);
}
