/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsig_pf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:35:13 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/04/11 11:25:53 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Imprime el entero sin signo. */
#include "libft.h"

void	ft_printunsig_pf(unsigned int n, size_t *i)
{
	if (n < 0)
	{
		n = -n;
	}
	if (n >= 10)
	{
		ft_printunsig_pf((n / 10), i);
		n = n % 10;
	}
	if (n < 10)
		ft_printchar_pf(n + 48, i);
}
