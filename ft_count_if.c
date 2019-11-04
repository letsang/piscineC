/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:16:52 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/18 14:26:32 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
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

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i;
	int count;

	i = 1;
	count = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

int main(int ac, char **av)
{
	printf("%d", ft_count_if(av, ac, &ft_atoi));
	return(0);
}
