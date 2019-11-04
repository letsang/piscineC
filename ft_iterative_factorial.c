/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:02:15 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/06 08:40:02 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int				f;
	unsigned	int	result;

	f = 1;
	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (f <= nb)
	{
		result = result * f;
		f++;
	}
	return result;
}

int main()
{
	int nb;
	nb = 13;

	printf("%d", ft_iterative_factorial(nb));
	return (0);
}
