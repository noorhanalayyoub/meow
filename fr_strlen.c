#include <stdio.h>

size_t	ft_strlen(char const *str)
{
	size_t	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

/*int main(){
	char c[] = "hii";
	printf("%d" , ft_strlen(c));
}*/