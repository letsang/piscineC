/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:16:37 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/14 13:35:24 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write (1, &argv[1][i], 1);
			}
			i++;
		}
	}
	if (argc != 2)
		write (1, "a", 1);
	write (1, "\n", 1);
	return (0);
}