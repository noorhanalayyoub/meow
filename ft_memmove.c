/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalayyou <nalayyou@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:43:08 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/27 17:43:12 by nalayyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

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
