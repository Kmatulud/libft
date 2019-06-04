/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:05:52 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/04 14:10:39 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = NULL;
	if ((char)c == '\0')
	{
		str = (char *)s + ft_strlen(s);
		return (str);
	}
	while (*s)
	{
		if (*s == (char)c)
			str = (char *)s;
		s++;
	}
	return (str);
}
