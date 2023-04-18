/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdori_pf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:14:16 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/04/11 11:24:57 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Si el caracter siguiente al % es d o i imprime un entero. Gestionando el
máximo y los negativos */
#include "libft.h"

void	ft_printdori_pf(int n, size_t *i)
{
	if (n == -2147483648)
	{
		ft_printdori_pf(n / 10, i);
		ft_printchar_pf('8', i);
	}
	else if (n < 0)
	{
		ft_printchar_pf('-', i);
		ft_printdori_pf(-n, i);
	}
	else
	{
		if (n >= 10)
			ft_printdori_pf((n / 10), i);
		ft_printchar_pf(('0' + n % 10), i);
	}
}
