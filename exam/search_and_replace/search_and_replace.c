/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:01:23 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/14 19:23:59 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

int main (int argc, char **argv)
{
	int i = 0;
	
	if (ft_strlen(argv[2]) > 1 || ft_strlen(argv[3]) > 1)
		write (1, "\n", 1);
	else if (argc != 4)
		write (1, "\n", 1);
	else if (argc == 4)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == *argv[2])
				argv[1][i] = *argv[3];
			i++;
			if (!argv[1][i])
				ft_putstr(argv[1]);
		}
	}
	return (0);
}
