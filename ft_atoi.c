/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 16:14:59 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/04 13:30:58 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	ft_atoi(char *str)
{
	int i;
	int j;
	int result;
	int count_sign;

	i = 0;
	j = 0;
	result = 0;
	count_sign = 0;
	while (str[i] != '\0' && isspace(str[i]))
	{
		   	i++;
	}
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			count_sign++;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= 48 && str[i] <= 57))
	{
		result = result*10 + str[i] - '0';
		i++;
	}
	if (count_sign%2 != 0)
		return (-result);
	return (result);
}

int main()
{
	char str[] = " ---+--+1234ab567";
	printf("%d",ft_atoi(str));
	return(0);
}
