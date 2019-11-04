/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 14:07:52 by jtsang            #+#    #+#             */
/*   Updated: 2019/08/31 14:19:07 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

int main (void)
{
	int i;
	i = 0;
	char src[] = "Salut";
	char dest[] = "okoko";
	ft_strcpy(dest, src);
	while (dest[i] != '\0')
	{
		write(1, &dest[i], 1);
		i++;
	}
	return(0);
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
	return(dest);
}
