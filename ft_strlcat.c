/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:47:16 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/03 16:11:44 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	size_t 	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	while (dst[j] != '\0' && j < dstsize)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	src[i] = '\0';
	return (i);
}
