/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:10:43 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/04 19:11:10 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_error(char *base)
{
	int i;
	int j;

	i = 0;
	if (!base) 
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);

		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] != base[j])
				j++;
			else
				return (0);
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb, char *base, long base_size)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > base_size)
		ft_putnbr((nbr / base_size), base, base_size);
	ft_putchar(base[nbr % base_size]);
}

void 	ft_putnbr_base(int nbr, char *base)
{
	long  base_size;

	base_size = strlen(base);
	if (!base_error(base))
		return;
	else
		ft_putnbr(nbr, base, base_size);
}

int main()
{
	int nbr = -2019;
	char base[] = "01";

	ft_putnbr_base(nbr, base);
	return (0);
}
