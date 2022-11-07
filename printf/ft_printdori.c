/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdori.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:14:16 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/11/07 16:58:11 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Si el caracter siguiente al % es d o i imprime un entero. Gestionando el
máximo y los negativos */
#include "ft_printf.h"

void	ft_printdori(int n, size_t *i)
{
	if (n == -2147483648)
	{
		ft_printdori(n / 10, i);
		ft_printchar('8', i);
	}
	else if (n < 0)
	{
		ft_printchar('-', i);
		ft_printdori(-n, i);
	}
	else
	{
		if (n >= 10)
			ft_printdori((n / 10), i);
		ft_printchar(('0' + n % 10), i);
	}
}
