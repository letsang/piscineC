/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:49:45 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/17 19:52:49 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		count_strs(char **strs, char *sep, int size)
{
	int i;
	int j;
	int len;
	j = 0;
	len = 0;
	while (size > 0)
	{
		i = 0;
		while (strs[j][i++])
		{
			len++;
		}
		i = 0;
		while (sep[i++] != '\0')
		{
			if (size > 1)
				len++;
		}
		j++;
		size--;
	}
	return (len + 1);
}
void	cat_strs(int size, char **strs, char *sep, char *dest)
{
	int i;
	int j;
	int k;
	k = 0;
	j = 0;
	while (size > 0)
	{
		i = 0;
		while (strs[j][i])
		{
			dest[k++] = strs[j][i++];
		}
		i = 0;
		if (size > 1)
		{
			while (sep[i] != '\0')
				dest[k++] = sep[i++];
		}
		size--;
		j++;
	}
	dest[k] = '\0';
}
char    *ft_strjoin(int size, char **strs, char *sep)
{
	char *dest;
	dest = (char*)malloc((sizeof(char)) * count_strs(strs, sep, size));
	if (!dest)
		return (NULL);
	cat_strs(size, strs, sep, dest);
	return (dest);
}

int main (int argc, char **argv)
{
	char sep[] = "&";
	char *dest;
	dest = ft_strjoin(argc, argv, sep);
	printf("%s", ft_strjoin(argc, argv, sep));
	free(dest);
	return(0);
}			
