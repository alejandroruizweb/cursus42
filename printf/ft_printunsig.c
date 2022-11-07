/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsig.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:35:13 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/11/07 17:01:47 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Imprime el entero sin signo. */
#include "ft_printf.h"

void	ft_printunsig(unsigned int n, size_t *i)
{
	if (n < 0)
	{
		n = -n;
	}
	if (n >= 10)
	{
		ft_printunsig((n / 10), i);
		n = n % 10;
	}
	if (n < 10)
		ft_printchar(n + 48, i);
}
