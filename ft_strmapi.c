/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 16:09:13 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/14 11:37:04 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s2;

	i = 0;
	if (s && f)
	{
		if (!(s2 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		else
			s2 = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
		while (s[i] != '\0')
		{
			s2[i] = f(i, s[i]);
			i += 1;
		}
		s2[i] = '\0';
		return (s2);
	}
	return (NULL);
}
