/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 11:50:30 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/14 12:21:33 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;

	i = 0;
	if (!s || !(s2 = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		s2[i] = s[i + start];
		i += 1;
	}
	s2[i] = '\0';
	return (s2);
}
