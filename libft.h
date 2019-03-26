/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashafedotova <mashafedotova@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 20:10:29 by mashafedoto       #+#    #+#             */
/*   Updated: 2019/03/06 18:43:06 by mashafedoto      ###   ########.fr       */
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
char	*ft_strcat(char *str1, const char *str2);
char	*ft_strncat(char *str1, const char *str2, size_t n);
size_t	ft_strlcat(char *str1, const char *str2, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
#endif
