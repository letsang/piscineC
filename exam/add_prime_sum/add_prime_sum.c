/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:24:03 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/19 17:10:43 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_isprime(int nb)
{
	int i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_atoi(char *str)
{
	unsigned int i;
	unsigned int count_sign;
	unsigned int res;
	i = 0;
	count_sign = 0;
	res = 0;

	while (str[i] && (str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\t' ||
				str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		count_sign++;
		i++;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		res = res * 10 + str[i] + 48;
		i++;
	}
	if (count_sign % 2 != 0)
		return (-res);
	return (res);
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnbr(int nb)
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

int main(int ac, char **av)
{
	int i = 2;
	int j = 0;
	int res = 0;

	if (ac != 2)
	{
		write (1, "0\n", 2);
		return (0);
	}
	if (atoi(av[1]) < 0)
	{
		write (1, "0\n", 2);
		return (0);
	}
	while (2 < atoi(av[1]) && j <= atoi(av[1]))
	{
		if (ft_isprime(atoi(av[1]) - j))
		{
			res = res + (atoi(av[1]) - j);
			j++;
		}
		i++;
	}
	ft_putnbr(res);
	return (0);
}	

