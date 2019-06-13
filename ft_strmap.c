/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:49:24 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/13 15:59:35 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*s2;

	i = 0;
	if (!(s2 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return NULL;
	else
		s2 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		s2[i] = f(s[i]);
		i += 1;
	}
	s2[i] = '\0';
	return (s2);
}
