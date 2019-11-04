/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:16:55 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/18 12:30:44 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nbr;

	nbr = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nbr = -nb;
	}

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;
	
	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	(void)ac;
	int tab[10] = {0,1,2,3,4,5,6,7,8,9};
/*	void	(*ptr)(int);
	ptr = &ft_putnbr;
	(*ptr)(atoi(av[1]));*/
	ft_foreach(tab,10,&ft_putnbr);
	return(0);
}
