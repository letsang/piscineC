#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char src[] = "tation";
	char dest[10];
	dest[0] = 'S';

	printf("%s", ft_strcat(dest, src));
	return(0);
}

char *ft_strcat(char *dest, char *src)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[count] != '\0')
	{
		dest[i] = src[count];
		i++;
		count++;
	}
	dest[i] = '\0';
	return(dest);
}
