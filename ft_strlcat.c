/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:35:17 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/28 15:35:52 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	dlength;
	size_t	slength;

	index = 0;
	slength = ft_strlen(src);
	dlength = ft_strlen(dest);
	while (src[index] && dlength < size)
	{
		dest[dlength] = src[index];
		index++;
		dlength++;
	}
	dest[dlength] = '\0';
	return (dlength + slength);
}

int	main(void)
{
	char	a[] = "hii";
	char	b[9] = "hello";

	ft_strlcat(b, a, 9);
	printf("%s", b);
}

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
