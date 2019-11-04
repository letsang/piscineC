/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 14:17:27 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/15 14:24:05 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int main (void)
{
	int a = 25;
	int b = 52;
	int *pta = &a;
	int *ptb = &b;

	printf("%d\n%d",a,b);
	ft_swap(pta,ptb);
	printf("\n%d\n%d",a,b);
	return (0);
}
