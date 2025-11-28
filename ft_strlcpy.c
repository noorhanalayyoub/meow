/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 14:19:56 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/28 14:26:22 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	getlength(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}
size_t	ft_strlcpy(char *dest, char const *src, size_t n)
{
	size_t	index;

	index = 0;
	if (n > getlength(src))
	{
		while (src[index])
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (getlength(src));
}
/*int	main(void)
{
	char a[] = "hii";
	char b[] = "hello";
	//strlcpy(a, b, 3);
	ft_strlcpy(a, b,3);
	printf("%s", b);
}*/
