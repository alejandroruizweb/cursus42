/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:22:29 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/04/11 11:25:26 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Convierte a Hexadecimal minúscula cogiendo los caracteres del 
base_character al dividirlo entre 16*/
#include "libft.h"

void	ft_printhex_pf(unsigned int n, size_t *i)
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
