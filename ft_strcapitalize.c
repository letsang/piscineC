/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 14:07:52 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/02 19:53:43 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		verif(char letter)
{
	if (letter >= 48 && letter <= 57)
		return (1);
	else if (letter >= 65 && letter <= 90)
		return (2);
	else if (letter >= 97 && letter <= 122)
		return (3);
	else
		return (4);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && verif(str[i]) == 3 )
			str[i] -= 32;
		else if (verif(str[i - 1]) == 4 && verif(str[i]) == 3)
			str[i] -= 32;
		else if (verif(str[i]) == 2 && i != 0 && verif(str[i - 1] != 4))
			str[i] += 32;
		i++;
	}
	return (str);
}

int main ()
{

	char test[] = "www-eee,vve,42ee8e*efe";
	printf("%s", ft_strcapitalize(test));



}
