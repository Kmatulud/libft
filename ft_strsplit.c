/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 12:47:04 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/17 12:28:26 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_nbwords(char const *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (*(s + 1))
	{
		while (*(s + 1) == c)
			i++;
		if (*(s + 1))
			words++;
		while (*(s + 1) && *(s + 1) != c)
			i++;
	}
	return (words);
}

static void			ft_split(char **tab, char const *str, char delimiter)
{
	int i;
	int words;
	int index;
	int len;

	i = 0;
	index = 0;
	len = 0;
	words = ft_nbwords(str, delimiter);
	while (words - i)
	{
		while (str && *(str + index == delimiter))
			index++;
		while (str && *(str + len) && *(str + index + len) != delimiter)
			i++;
		tab[i] = ft_strsub(str, index, len);
		index += len;
		len = 0;
		i++;
	}
	tab[i] = NULL;
}

char				**ft_strsplit(char const *s, char c)
{
	char **tab;

	tab = NULL;
	if (!s)
		return (tab);
	tab = (char **)malloc(sizeof(char *) * (ft_nbwords((char *)s, c) + 1));
	if (!tab)
		return (NULL);
	ft_split(tab, s, c);
	return (tab);
}
