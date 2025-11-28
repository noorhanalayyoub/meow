/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anashwan <anashwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:35:17 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/28 17:20:12 by anashwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	dlength;
	size_t	slength;
	size_t	total;
	 
	index = 0;
	slength = ft_strlen(src);
	dlength = ft_strlen(dest);
	total = slength + dlength;
	if (size <= dlength)
		return (size + slength);
	while (src[index] && dlength < size - 1)
	{
		dest[dlength] = src[index];
		index++;
		dlength++;
	}
	dest[dlength] = '\0';
	return (total);
}

// int	main(void)
// {
// 	char	a[] = "hii";
// 	char	b[9] = "hello";

// 	ft_strlcat(b, a, 9);
// 	printf("%s", b);
// }

/*char * ft_strchr(const char *str, int c)
{
	size_t index;
	size_t length;
	char *ptr;
	ptr = NULL;
	index = 0;
	length = ft_strlen(str);
	while (index <= length)
	{
		if (c == str[index])
		{
			ptr = str + index;
			break ;
		}
		index++;
	}
	return (ptr);
}*/
