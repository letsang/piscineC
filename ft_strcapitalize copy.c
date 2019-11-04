#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char *ft_strcapitalize(char *str);

char *ft_strcapitalize(char *str)
{
 	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i-1] <= 48)
			str[i] = str[i] - 32;
		else if (str[i-1] >= 58 && str[i-1] <= 64)
			str[i] = str[i] - 32;
		else if (str[i-1] >= 91 && str[i-1] <= 96)
			str[i] = str[i] - 32;
		else if	(str[i-1] >= 123)
			str[i] = str[i] - 32;
		else if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		i++;
		}
	return (str);
}

int	main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s", ft_strcapitalize(str));
	return(0);
}
