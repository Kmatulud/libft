/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:46:46 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/18 11:38:46 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp_d;
	char	*tmp_s;

	tmp_d = (char *)dst;
	tmp_s = (char *)src;
	if (tmp_d == tmp_s)
		return (tmp_d);
	if ((tmp_d <= tmp_s) || (tmp_d >= (tmp_s + len)))
		while (len > 0)
		{
			*(tmp_d++) = *(tmp_s++);
			len--;
		}
	else
	{
		tmp_d += len - 1;
		tmp_s += len - 1;
		while (len > 0)
		{
			*(tmp_d--) = *(tmp_s--);
			len--;
		}
	}
	return (dst);
}
