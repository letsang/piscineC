/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:01:55 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/18 13:42:40 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_atoi(char *str)
{
	unsigned int i = 0, count_sign = 0, res = 0;
	while (str[i] &&
		(str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			count_sign++;
		i++;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	if (count_sign % 2 != 0)
		return (-res);
	return (res);
}

int	ft_any(char **tab, int(*f)(char*))
{
	int i;

	i = 1;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 0)
			return (0);
		i++;
	}
	tab[i] = NULL;
	return (1);
}

int main(int ac, char **av)
{
	printf("%d", ft_any(av, &ft_atoi));
	return(0);
}
