/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmemptr_pf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:03:48 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/04/11 11:25:35 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Esta función imprime un puntero de memoria. Lo hacemos imprimiendo un 0x y
después la misma función que ft_printhex pero con unsigned long int*/
#include "libft.h"

static void	ft_printpex_pf(unsigned long int n, size_t *i)
{
	char	string[25];
	char	*base_character;
	int		j;

	base_character = "0123456789abcdef";
	j = 0;
	if (n == 0)
	{
		ft_printchar_pf('0', i);
		return ;
	}
	while (n != 0)
	{
		string[j] = base_character [n % 16];
		n = n / 16;
		j++;
	}
	while (j--)
		ft_printchar_pf(string[j], i);
}

void	ft_printmemptr_pf(unsigned long int n, size_t *i)
{
	ft_printchar_pf('0', i);
	ft_printchar_pf('x', i);
	ft_printpex_pf(n, i);
}
