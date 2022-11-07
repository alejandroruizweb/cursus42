/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:11:45 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/11/07 16:51:08 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Si el caracter siguiente al % es s imprime la string print caracter a 
caracter */
#include "ft_printf.h"

void	ft_printstr(char *print, size_t *i)
{
	if (!print)
		print = "(null)";
	while (*print)
	{
		ft_printchar(*print, i);
		print++;
	}
}
