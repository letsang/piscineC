/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 11:25:57 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/08 17:45:16 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char *srcd;
	
	srcd = malloc(ft_strlen(src) * sizeof(char));
	if (srcd == NULL)
		exit (0);
	else
		return (ft_strcpy(srcd, src));
}

int main ()
{
	char src[] = "Salut.";
	printf("%s\n", ft_strdup(src));
	printf("%s", src);
	return (0);
}
