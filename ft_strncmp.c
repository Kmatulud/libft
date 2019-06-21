/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 13:44:57 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/21 13:17:40 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	if ((unsigned char)s1[i] - (unsigned char)s2[i] > 0)
		return (1);
	else if ((unsigned char)s1[i] - (unsigned char)s2[i] < 0)
		return (-1);
	else
		return (0);
}
