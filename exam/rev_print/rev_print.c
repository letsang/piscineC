/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 14:25:17 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/15 15:01:50 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main (int argc, char **argv)
{
	int i;
	i = 0;
	while (argv[1][i])
	{
		write (1, &argv[1][ft_strlen(argv[1]) - 1 - i], 1);
		i++;
	}
	return (0);
}
