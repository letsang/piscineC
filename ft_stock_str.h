/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtsang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:12:20 by jtsang            #+#    #+#             */
/*   Updated: 2019/09/13 13:02:18 by jtsang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_STOCK_STR_H
#	define FT_STOCK_STR_H

#	include <stdlib.h>
#	include <unistd.h>

typedef	struct		s_stock_str
{
	int size;
	char *str;
	char *copy;
}					t_stock_str;

char				*ft_strdup(char *src);
int					ft_strlen(char *str);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);
void				ft_show_tab(struct s_stock_str *par);

#	endif
