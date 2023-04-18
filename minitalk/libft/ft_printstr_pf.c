/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:11:45 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/04/11 11:25:44 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Si el caracter siguiente al % es s imprime la string print caracter a 
caracter */
#include "libft.h"

void	ft_printstr_pf(char *print, size_t *i)
{
	if (!print)
		print = "(null)";
	while (*print)
	{
		ft_printchar_pf(*print, i);
		print++;
	}
}
