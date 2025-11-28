/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anashwan <anashwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:03:51 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/28 16:32:43 by anashwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	size_t			index;
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)source;
	d = (unsigned char *)dest;
	index = 0;
	if (dest == NULL || source == NULL)
		return (NULL);
	while (index < n)
	{
		d[index] = s[index];
		index++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*c;
	char	n[] = "meow";

	c = "hii";
	ft_memcpy(n, c, 3);
	printf("%s", n);
}*/
