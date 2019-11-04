/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 09:17:56 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/15 10:04:57 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_ul(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);
	else
		return (2);
}

void ft_putstr(char *str)
{
	int i;
	i = 0;

	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	int i;

	if (argc != 2)
		write (1, "\n", 1);
	else
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (ft_ul(argv[1][i]) == 1)
			{
				argv[1][i] = argv[1][i] + 32;
			}
			else if (ft_ul(argv[1][i]) == 0)
			{
				argv[1][i] = argv[1][i] - 32;
			}
			else if (ft_ul(argv[1][i]) == 2)
				argv[1][i] = argv[1][i];
			i++;
		}
		ft_putstr(argv[1]);
	}
	return (0);
}
