/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 15:30:32 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/19 15:50:42 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return(i);
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
		write (1, &str[i++], 1);
}

int main(int ac, char **av)
{
	int i;
	int j;
	int count;
	i = 0;
	j = 0;
	count = 0;
	
	if (ac != 3)
		return (0);
	while (av[1][i])
	{
		while (av[2][j])
		{
			if (av[1][i] == av[2][j])
			{
				count++;
				i++;
			}
			j++;
		}
		i++;
	}
	if (ft_strlen(av[1]) == count)
	{
		ft_putstr(av[1]);
		ft_putchar('\n');
	}
	return(0);
}
