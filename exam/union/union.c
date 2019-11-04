/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:41:36 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/15 18:03:12 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *s1, char *s2)
{
	int i;
	int j;
	i = 0;
	j = 0;

	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int verif_double(char *ref, char c)
{
	int i = 0;
	int j = 0;

	while (ref[i])
	{
		if (ref[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main (int argc, char **argv)
{
	char *uni = ft_strcat(argv[1],argv[2]);
	int i = 0;
	printf("%s", uni);
	while (uni[i])
	{
		if (!(verif_double(uni, uni[i])))
			ft_putchar(uni[i]);
		i++;
	}
	return (0);
}
