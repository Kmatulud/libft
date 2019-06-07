/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:46:46 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/07 15:01:28 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*src1;

	dest = dst;
	src1 = (char *)src;
	if (src1 < dest)
	{
		dest += len - 1;
		src1 += len - 1;
		while (len--)
		{
			*dest = *src1;
			dest--;
			src1--;
		}
	}
	return (dst);
}
