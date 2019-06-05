/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:07:43 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/05 10:01:21 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int i;
	char *str;

	i = 0;
	str = (char*)s;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
