/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:56:08 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/11/07 19:08:06 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

/* Pruebo commit. La función principal usa un número de argumentos x (...), lo busca en 
*print. Va avanzando en la string e imprimiendo hasta que encuentra un %.
Cuando lo encuentra avanza 1 caracter y hace lo que la función index 
dice. Cuando usamos printf a parte de imprimir lo que sea nos devuelve 
un número que coincide con los caracteres impresos. (i)*/
int		ft_printf(char const *print, ...);
/* La función que imprime caracter a caracter. (*i)++ nos vale para contar 
el número de caracteres impresos tal como hace el printf original */
void	ft_printchar(char c, size_t *i);
/* Si el caracter siguiente al % es s imprime la string print caracter a 
caracter */
void	ft_printstr(char *print, size_t *i);
/* Si el caracter siguiente al % es d o i imprime un entero. Gestionando el
máximo y los negativos */
void	ft_printdori(int n, size_t *i);
/* Imprime el entero sin signo. */
void	ft_printunsig(unsigned int n, size_t *i);
/* Convierte a Hexadecimal minúscula cogiendo los caracteres del 
base_character al dividirlo entre 16*/
void	ft_printhex(unsigned int n, size_t *i);
/* La misma función que ft_printhex pero en mayúscula */
void	ft_printuphex(unsigned int n, size_t *i);
/* Esta función imprime un puntero de memoria. Lo hacemos imprimiendo un 0x y
después la misma función que ft_printhex pero con unsigned long int*/
void	ft_printmemptr(unsigned long int n, size_t *i);

#endif