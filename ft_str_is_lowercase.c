/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 14:07:52 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/01 14:43:57 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str);

int ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char str[] = "";
	
	/* if (ft_str_is_lowercase(str))
		write(1, "Y", 1);
	else
		write(1, "N", 1); */
	printf("%d", ft_str_is_lowercase(str));
	return(0);
}
