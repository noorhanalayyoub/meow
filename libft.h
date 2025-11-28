/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anashwan <anashwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:54:47 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/28 17:04:57 by anashwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>

// Character functions
int			ft_isdigit(int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);

// Memory Functions
void	ft_bzero(void *str, size_t a);
void	*ft_memcpy(void *dest, const void *source, size_t n);
void	*ft_memmove(void *dest, const void *source, size_t n);
void	*ft_memset(void *str, int c, size_t a);

// String Functions
size_t 		ft_strlcat(char *dest, const char *src, size_t size);
size_t 		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlen(char const *str);
char		*ft_strrchr(const char *str, int c);

// meow..
#endif

