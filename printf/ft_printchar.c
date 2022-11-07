/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:05:08 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/11/07 16:46:35 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función que imprime caracter a caracter. (*i)++ nos vale para contar 
el número de caracteres impresos tal como hace el printf original */
#include "ft_printf.h"

void	ft_printchar(char c, size_t *i)
{
	write(1, &c, 1);
	(*i)++;
}
