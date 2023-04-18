/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:11:03 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/04/11 13:06:15 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función principal usa un número de argumentos x (...), lo busca en 
*print. Va avanzando en la string e imprimiendo hasta que encuentra un %.
Cuando lo encuentra avanza 1 caracter y hace lo que la función index 
dice. Cuando usamos printf a parte de imprimir lo que sea nos devuelve 
un número que coincide con los caracteres impresos. (i)*/
#include "libft.h"
#include<stdio.h>

void	ft_index(va_list arg, char *print, size_t *i)
{
	if (*print == 'c')
		ft_printchar_pf(va_arg(arg, int), i);
	else if (*print == 's')
		ft_printstr_pf(va_arg(arg, char *), i);
	else if (*print == '%')
		ft_printchar_pf(*print, i);
	else if ((*print == 'd') || (*print == 'i'))
		ft_printdori_pf(va_arg(arg, int), i);
	else if (*print == 'u')
		ft_printunsig_pf(va_arg(arg, int), i);
	else if (*print == 'x')
		ft_printhex_pf(va_arg(arg, unsigned int), i);
	else if (*print == 'X')
		ft_printuphex_pf(va_arg(arg, int), i);
	else if (*print == 'p')
		ft_printmemptr_pf(va_arg(arg, unsigned long int), i);
}

int	ft_printf(char const *print, ...)
{
	va_list	arg;
	size_t	i;

	i = 0;
	va_start(arg, print);
	while (*print)
	{
		if (*print == '%')
		{
			print++;
			ft_index(arg, (char *)print, &i);
		}
		else
			ft_printchar_pf(*print, &i);
		print++;
		if (!print)
		{
			print = "(null)";
			va_end(arg);
		}
	}
	va_end(arg);
	return (i);
}
