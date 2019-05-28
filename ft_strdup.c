/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:36:54 by kmatulud          #+#    #+#             */
/*   Updated: 2019/05/24 13:45:49 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)malloc(sizeof(s2) * ft_strlen(s1 + 1));
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}