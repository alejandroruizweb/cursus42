/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar_pf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:05:08 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/04/11 11:24:43 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función que imprime caracter a caracter. (*i)++ nos vale para contar 
el número de caracteres impresos tal como hace el printf original */
#include "libft.h"

void	ft_printchar_pf(char c, size_t *i)
{
	write(1, &c, 1);
	(*i)++;
}
