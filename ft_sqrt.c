/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:02:15 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/06 13:39:49 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	i = 1;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (0);
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>

int main()
{
	int nb;

	nb = 2400000000;
	printf("%d", ft_sqrt(nb));
	return(0);
}
