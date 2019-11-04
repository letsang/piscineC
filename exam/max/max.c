/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:20:41 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/16 16:43:03 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int max(int *tab, unsigned int len)
{
	int i = 0;
	int max = 0;
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		else
			i++;
	}
	return (max);
}

int main(void)
{
	int tab[10] = {6, 1, 2, 3, 40, 1, 46, 6, 0, 41};
	printf("%d", max(tab,10));
	return(0);
}
