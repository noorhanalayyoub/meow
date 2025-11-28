/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:06:53 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/28 16:06:56 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

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
int	main(void)
{
	char a[] = "hii";
	char *mainptr = ft_strchr(a, 'i');
	printf("%c", *mainptr);
}
