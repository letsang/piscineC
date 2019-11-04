/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:34:27 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/18 13:00:24 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int add_one(int n)
{
	n++;
	return (n);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *map;
	int i;

	if (!(map = (int*)malloc(sizeof(int) * length)))
		return (NULL);
	i = 0;
	while (i < length)
	{
		map[i] = (*f)(tab[i]);
		i++;
	}
	return (map);
}

#include <stdio.h>

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	int i = 0;
	int tab[10] = {0,1,2,3,4,5,6,7,8,9};
	/*	void	(*ptr)(int);
	 *		ptr = &ft_putnbr;
	 *			(*ptr)(atoi(av[1]));*/
	while (i < 10)
		printf("%d\n", *ft_map(tab,10,&add_one) + i++);
	return(0);
}
