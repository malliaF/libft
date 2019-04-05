/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashafedotova <mashafedotova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 20:10:29 by mashafedoto       #+#    #+#             */
/*   Updated: 2019/04/03 21:39:16 by mashafedoto      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void	*ft_memset(void *str, int c, size_t n);
void    ft_bzero(void *str, size_t n);
size_t  ft_strlen(const char *str);
char	*ft_strcpy(char *dst, const char *src);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strdup(const char *str);
char	*ft_strcat(char *dst, const char *append);
char	*ft_strncat(char *dst, const char *append, size_t n);
size_t	ft_strlcat(char *dst, const char *append, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strstr(const char *str, const char *substr);
char	*ft_strnstr(const char *str, const char *substr, size_t n);
int	ft_strcmp(const char *str1, const char *str2);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
int	ft_atoi(const char *str);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
#endif
