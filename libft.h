/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:54:47 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/28 15:47:08 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
size_t 		ft_strlcat(char *dest, const char *src, size_t size);
size_t 		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlen(char const *str);
#endif

