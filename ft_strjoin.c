/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:22:00 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/18 11:50:20 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    size_t	x;
    size_t	y;
    size_t	len;
    char	*str;

    x = 0;
    y = 0;
    if (!s1 || !s2)
        return (0);
    len = strlen(s1) + strlen(s2) + 1;
    str = (char *)malloc(sizeof(char) * len);
    if (!str)
        return (0);
    while (s1[x] != '\0')
    {
        str[x] = s1[x];
        x++;
    }
    while (s2[y] != '\0')
    {
        str[x++] = s2[y++];
    }
    str[x] = '\0';
    return (str);
}
