/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:08:48 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/05 10:18:35 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)s;
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}
