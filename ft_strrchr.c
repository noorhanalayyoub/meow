/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anashwan <anashwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:06:53 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/28 16:50:57 by anashwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	length;
	size_t	index;

	length = ft_strlen(str);
	while (length >= 0)
	{
		if (c == str[length])
			return ((char *)&str[length]);
		length--;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char a[] = "hii";
// 	char *mainptr = ft_strchr(a, 'i');
// 	printf("%c", *mainptr);
// }
