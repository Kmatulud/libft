/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatulud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:30:17 by kmatulud          #+#    #+#             */
/*   Updated: 2019/06/12 16:16:29 by kmatulud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
void	ft_putchar(char c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putnbr(int nb);
void	ft_putstr_fd(const char *str, int fd);
void	ft_putstr(const char *str);
char	*ft_strcat(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dest, const char *src, size_t nb);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char    *ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *b, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strcpy(char *dest, const char *src);

/* Part two*/

void	*ft_memalloc(size_t size);
char    *ft_strnew(size_t size);
void    ft_strdel(char **as);
void    ft_memdel(void **ap);
void    ft_strclr(char *s);

#endif
