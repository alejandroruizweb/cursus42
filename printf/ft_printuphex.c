/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuphex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:38:49 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/11/07 17:19:27 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La misma función que ft_printhex pero en mayúscula */
#include "ft_printf.h"

void	ft_printuphex(unsigned int n, size_t *i)
{
	char	string[25];
	char	*base_character;
	int		j;

	base_character = "0123456789ABCDEF";
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
