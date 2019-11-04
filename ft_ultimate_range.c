/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:34:45 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/14 09:30:25 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *urange;
	int i;

	if (min >= max)
	{
		urange = NULL;
		return (0);
	}
	urange = (int*)malloc((max - min) * sizeof(int));
	if (urange == NULL)
		return (-1);
	i = 0;
	while (i < (max - min))
	{
		urange[i] = min + i;
		i++;
	}
	*range = urange;
	return (i);
}

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

int main (void)
{
	int min;
	int max;
	int i;
	int *tab;

	min = 10;
	max = 20;
	i = 0;
	tab = ft_range(min, max);
	while (i < ((max + 1)  - min))
	{
		printf("%d", *tab + i);
		i++;
	}
	printf("\n%d", ft_ultimate_range(&tab, min, max));
	return (0);
}
