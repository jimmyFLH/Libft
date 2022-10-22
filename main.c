/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmyfleisch <jimmyfleisch@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:54:05 by jimmyfleisc       #+#    #+#             */
/*   Updated: 2022/10/05 21:54:26 by jimmyfleisc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
    char *s = "allo";
    char *fin = malloc(10000);

    printf("ft_strlen (allo = 4) : %d\n", ft_strlen(s));
    ft_strlcpy(fin, s, ft_strlen(s));
    printf("ft_strlcpy de (allo) : %s\n", fin);
    return 0;
}
