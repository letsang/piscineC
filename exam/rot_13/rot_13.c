/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 09:17:56 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/15 12:04:56 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char ft_rot_alpha(char c)
{
	if ((c >= 65 && c <= 77) || (c >= 97 && c <= 109))
		return (c + 13);
	else if ((c >= 78 && c <= 90) || (c >= 110 && c <= 122))
		return (c - 13);
	else
		return (c);
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
	else if (argv[1][0] == 0)
		write (1, "\n", 1);
	else
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			argv[1][i] = ft_rot_alpha(argv[1][i]);
			i++;
		}
		ft_putstr(argv[1]);
	}
	return (0);
}
