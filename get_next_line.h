/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 11:10:47 by kmatulud          #+#    #+#             */
/*   Updated: 2019/07/05 11:47:34 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"
# include <sys/uio.h>

# define BUFF_SIZE 32
# define ERROR -1
# define EMPTY 0
# define TRUE 1
# define START 0

int		get_next_line(int const fd, char **line);
#endif
