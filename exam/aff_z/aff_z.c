/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 14:18:25 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/14 14:43:07 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int count;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] && count < 1)
		{	
			if (argv[1][i] == 'z')
			{
				write (1, &argv[1][i], 1);
				count++;
			}
			i++;
		}
		if (count < 1)
			write (1, "z\n", 2);
	}
	else if (argc != 2)
		write (1, "z\n", 2);
	return (0);
}	

