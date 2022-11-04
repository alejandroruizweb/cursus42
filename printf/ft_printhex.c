/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:22:29 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/11/04 16:35:54 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhex(unsigned int n, size_t *i)
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
