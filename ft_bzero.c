#include <stdio.h>

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
