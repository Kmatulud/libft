/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:13:43 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/06 13:43:39 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	while (needle[i] != '\0')
	{
		j = 0;
		while (haystack[j] == needle[i + j])
		{
			if (haystack[j + 1] == '\0')
			{
				return (needle + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
