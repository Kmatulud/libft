/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:34:46 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/18 11:39:32 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int sign;
	int tmp;

	sign = 1;
	tmp = 0;
	if (ft_strlen(str) >= 19 && ft_strcmp("9223372036854775807", str) < 0)
		return (-1);
	if (ft_strlen(str) >= 20 && ft_strcmp("-9223372036854775807", str) < 0)
		return (0);
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		tmp = tmp * 10 + *str - '0';
		str++;
	}
	return (tmp * sign);
}
