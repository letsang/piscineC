/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 07:49:26 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/16 15:07:40 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int check_charset(char *charset, char c)
{
	int i;
	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int count_strs(char *charset, char *str)
{
	int count;
	int i;
	count = 0;
	i = 0;
	if (str[0] && (check_charset(charset, str[0])))
		count = 1;
	while (str[i])
	{
		if (check_charset(charset, str[i]) && (!(check_charset(charset, str[i - 1]))))
			count++;
		i++;
	}
	return (count);
}	

char *ft_strdup(char *src, char *charset)
{
	int i;
	char *dup;
	i = 0;
	while (src[i] && (check_charset(charset, src[i])))
		i++;
	if (!(dup = malloc(sizeof(char) * i + 1)))
		return (NULL);
	i = 0;
	while (src[i] && (check_charset(charset, src[i])))
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char **ft_split(char *str, char *charset)
{
	int i;
	int pos;
	int j;
	char **tab;

	if (!(tab = malloc(sizeof(char*) * (count_strs(charset, str) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	pos = 0;
	while (str[i])
	{
		if ((!check_charset(charset, str[i - 1]) && check_charset(charset, str[i])))
		{
			tab[j] = ft_strdup((str + i), charset);
			j++;
		}
		i++;
	}
	tab[j] = malloc(sizeof(char) * 1);
	tab[j][0] = '\0';
	return (tab);
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
	(void)argc;
	(void)argv;
	char charset[]="-,.";
	char str[]="-,.------Salut-.hello,world";
	char **tab;
	tab = ft_split(str, charset);
	int i = 0;
	while (i <= count_strs(charset, str))
	{
		ft_putstr(tab[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
