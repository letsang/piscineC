#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char src[] = "tation";
	char dest[10];
	dest[0] = 'S';
	unsigned int nb;

	nb = 3;
	printf("%s", ft_strncat(dest, src, nb));
	return(0);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int count;

	i = 0;
	count = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[count] != '\0' && count < nb)
	{
		dest[i] = src[count];
		i++;
		count++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}
