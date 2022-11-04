/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmemptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:03:48 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/11/04 16:35:06 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printpex(unsigned long int n, size_t *i)
{
	char	string[25];
	char	*base_character;
	int		j;

	base_character = "0123456789abcdef";
	j = 0;
	if (n == 0)
	{
		ft_printchar('0', i);
		return ;
	}
	while (n != 0)
	{
		string[j] = base_character [n % 16];
		n = n / 16;
		j++;
	}
	while (j--)
		ft_printchar(string[j], i);
}

void	ft_printmemptr(unsigned long int n, size_t *i)
{
	ft_printchar('0', i);
	ft_printchar('x', i);
	ft_printpex(n, i);
}
