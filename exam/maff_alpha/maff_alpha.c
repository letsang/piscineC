/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 13:48:28 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/14 13:49:41 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (void)
{
	write (1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}