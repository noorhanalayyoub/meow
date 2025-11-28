/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anashwan <anashwan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:20:22 by nalayyou          #+#    #+#             */
/*   Updated: 2025/11/28 16:32:12 by anashwan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t a)
{
	size_t			index;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	index = 0;
	while (index < a)
	{
		ptr[index] = '\0';
		index++;
	}
}
