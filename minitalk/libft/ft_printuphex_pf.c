/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuphex_pf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:38:49 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/04/11 11:26:09 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La misma función que ft_printhex pero en mayúscula */
#include "libft.h"

void	ft_printuphex_pf(unsigned int n, size_t *i)
{
	char	string[25];
	char	*base_character;
	int		j;

	base_character = "0123456789ABCDEF";
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
