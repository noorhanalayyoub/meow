#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			index;
	unsigned char	*s1;
	unsigned char	*s2;

	s2 = (unsigned char *)str2;
	s1 = (unsigned char *)str1;
	index = 0;
	while (index < n && (s1[index] || s2[index]))
	{
		if ((s1[index] - s2[index]))
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}
/*int main () {
	char *a=NULL;
	char *b=NULL;
	printf("%d",ft_strncmp(a,b,100));
	printf("%d" , strncmp(a,b,100));

}*/