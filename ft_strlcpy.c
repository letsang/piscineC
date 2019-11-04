/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 14:07:52 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/02 14:37:09 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int count;

	i = 0;
	count = 0;

	while (src[i] != '\0')
	{
		count++;
		i++;
	}

	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	return (count);
}

int	main(void)
{
	char src[] = "Salutation";
	char dest[] = "Bonjour";
	unsigned int size;

	size = 7;

	ft_strlcpy(dest, src, size);
	printf("%u %s", ft_strlcpy(dest, src, size), dest);
	return(0);
}
