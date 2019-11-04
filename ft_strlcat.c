/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 11:08:15 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/08 13:17:27 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main ()
{
	char dest[8] = "POKE";
	char d[8] = "POKE";
	char src[] = "MON";
	unsigned int size;

	size = 4;
	printf("%lu\n", strlcat(d, src, size));
	printf("%d", ft_strlcat(dest, src, size));
	return (0);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int res;

	i = 0;
	while (dest[i] != '\0')
		i++;
	res = 0;
	while (src[res] != '\0')
		++res;
	if (size <= i)
		res += size;
	else res += i;
	j = 0 ;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}
