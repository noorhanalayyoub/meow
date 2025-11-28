/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anashwan <anashwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:43:08 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/28 16:32:49 by anashwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	size_t			index;
	unsigned char	*d;
	unsigned char	*temp;

	index = 0;
	d = (unsigned char *)dest;
	temp = (unsigned char *)source;
	if (dest == NULL || source == NULL)
		return (NULL);
	while (index < n)
	{
		d[index] = temp[index];
		index++;
	}
	return (d);
}
/*int	main(void)
{
	char	a[30] = "That's not what I said.";

	ft_memmove(a + 7, a + 11, 13);
	printf("%s", a);
}*/
