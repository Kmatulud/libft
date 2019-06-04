/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 08:49:52 by event             #+#    #+#             */
/*   Updated: 2019/06/04 11:39:58 by event            ###   ########.fr       */
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
