/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anashwan <anashwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:19:56 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/28 16:51:49 by anashwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t n)
{
	size_t	index;

	index = 0;
	if (n > ft_strlen(src))
	{
		while (src[index])
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (ft_strlen(src));
}
// int	main(void)
// {
// 	char a[] = "hii";
// 	char b[] = "hello";
// 	//strlcpy(a, b, 3);
// 	ft_strlcpy(a, b,3);
// 	printf("%s", b);
// }
