/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:27:57 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/20 06:37:00 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_compare(int a, int b)
{
	return (a - b);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int order;

	if (length == 0)
		return (0);
	else if (length == 1)
		return (1);
	i = 0;
	while (f(tab[i], tab[i + 1]) == 0)
		i++;
	if (f(tab[i], tab[i + 1]) < 0)
		order = 1;
	else
		order = -1;
	i++;
	while (tab[i] != 0 && i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0 && order == -1)
			return (0);
		else if (f(tab[i], tab[i + 1]) > 0 && order == 1)
			return (0);
		else
			i++;
	}
	return (1);
}

#include <stdio.h>

int main (void)
{
	int tab[] = {4, 5, 6, 7, 8, 9};
	int length = 6;
	printf("%d", ft_is_sort(tab, length, &ft_compare));
	return (0);
}
