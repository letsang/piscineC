/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 11:54:10 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/05 12:48:07 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int p;
	int result;
	
	p = 0;
	result = 1;
	if (power < 0)
		return (0);
	else if (power > 0)
	{
		while (p < power)
		{
			result = result * nb;
			p++;
		}
	}
	return (result);
}


int main()
{
	int nb;
	int power;

	nb = 2;
	power = 0;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
