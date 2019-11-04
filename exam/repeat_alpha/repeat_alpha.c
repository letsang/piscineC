/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:01:57 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/14 18:59:57 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int count_alpha (char c)
{
	int i = 0;
	int count = 1;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char alpha_2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (alpha[i] && !((alpha[i] == c) || (alpha_2[i] == c)))
	{
		i++;
		count++;
	}
	return (count);
}

int main (int argc, char **argv)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	if (argc != 2)
		write (1, "\n", 1);
	else if (argc == 2)
		while (argv[1][k] != '\0')
		{
			j = 0;
			while (j < count_alpha(argv[1][i]))
			{
				write (1, &argv[1][i], 1);
				j++;
			}
			k++;
			i++;
		}
	else
		write (1, "\n", 1);
	return (0);
}
