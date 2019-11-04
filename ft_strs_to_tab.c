/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:19:01 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/15 11:33:54 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			index;
	t_stock_str	*par;

	if (!(par = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	index = 0;
	while (index < ac)
	{
		par[index].size = ft_strlen(av[index]);
		par[index].str = av[index];
		par[index].copy = ft_strdup(av[index]);
		++index;
	}
	par[index].str = 0;
	return (par);
}
