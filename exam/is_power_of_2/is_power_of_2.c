/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 15:36:04 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/15 16:40:44 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int count_sign = 0;
	int res = 0;

	while (str[i] && (str[i] == '\t' && str[i] == '\n' && str[i] == '\v' && str[i] == '\f'
								&& str[i] == '\r' && str[i] == ' '))
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
	if (count_sign % 2 == 0)
		return (res);
	else
		return (-res);
}

int is_power_of_2(int n)
{
	int i;
	int po;
	int res;
	i = 2;
	po = 1;
	res = 2;
	while ((res < n) && (po < n))
	{
		res = res * i;
		po++;
	}
	if (res == n)
		return (1);
	else
		return (0);
}

int main(int argc,char **argv)
{
	printf("%d", is_power_of_2(ft_atoi(argv[1])));
	return (0);
}
