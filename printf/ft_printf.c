/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:11:03 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/11/07 16:33:09 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La función principal usa un número de argumentos x (...), lo busca en 
*print. Va avanzando en la string e imprimiendo hasta que encuentra un %.
Cuando lo encuentra avanza 1 caracter y hace lo que la función index 
dice. Cuando usamos printf a parte de imprimir lo que sea nos devuelve 
un número que coincide con los caracteres impresos. (i)*/
#include "ft_printf.h"
#include<stdio.h>

void	ft_index(va_list arg, char *print, size_t *i)
{
	if (*print == 'c')
		ft_printchar(va_arg(arg, int), i);
	else if (*print == 's')
		ft_printstr(va_arg(arg, char *), i);
	else if (*print == '%')
		ft_printchar(*print, i);
	else if ((*print == 'd') || (*print == 'i'))
		ft_printdori(va_arg(arg, int), i);
	else if (*print == 'u')
		ft_printunsig(va_arg(arg, int), i);
	else if (*print == 'x')
		ft_printhex(va_arg(arg, unsigned int), i);
	else if (*print == 'X')
		ft_printuphex(va_arg(arg, int), i);
	else if (*print == 'p')
		ft_printmemptr(va_arg(arg, unsigned long int), i);
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
			ft_printchar(*print, &i);
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

//int	main()
//{
//	char c;
//	char a[50] = "";
//	int n;
//	int i;

//	n = -1234645646;
//	c = '0';
//	ft_printf("%s", a);
//	printf("");
	//i = ft_printf("%u\n", n);
	//i = printf("%d\n", 123456);
	//ft_printf("%d", i);
//}
