/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 08:55:18 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/06 08:05:16 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find);

int	ft_strlen(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}


char    *ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int count;
	unsigned int length;

	length = ft_strlen(to_find);
	count = 0;
	i = 0;
	if (!to_find)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[length - length + count])
			count++;
		i++;
	}
	if (count == length)
		return (&str[count]);
	return (0);
}

int main (void)
{
	char str[] = "Je m'apelle Toto et je suis un mytho.";
	char to_find[] = "Toto";
	printf("%s", ft_strstr(str, to_find));
	return(0);
}
