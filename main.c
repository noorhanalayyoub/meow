#include "libft.h"

int main()
{
	char *src = " there";
	char dest[100] = "hiiii";
	int x = ft_strlcat(dest, src, 100);
	printf("Dest = %s\nReturned = %d\n", dest, x);
}