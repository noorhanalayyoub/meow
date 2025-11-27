#include <stdio.h>

void	*ft_memset(void *str, int c, size_t a)
{
	size_t			index;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	index = 0;
	while (index < a)
	{
		ptr[index] = c;
		index++;
	}
	return (ptr);
}
