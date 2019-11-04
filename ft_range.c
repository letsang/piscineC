/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:04:45 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/13 14:27:12 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int *range = NULL;
	int i;
	
	if (min >= max)
		return (range);
	range = malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < (max - min))
		{
			range[i] = min + i;
			i++;
		}
	}
	return (range);
}

int main(int argc, char **argv)
{
	int min;
	int max;
	int i;
	int *tab;

	min = 6;
	max = 42;
	i = 0;
	tab = ft_range(min, max);
	while (i < ((max + 1)  - min))
	{
		printf("%d", *tab + i);
		i++;
	}
	return (0);
}
