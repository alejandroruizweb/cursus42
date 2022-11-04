/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:56:08 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/11/04 16:35:28 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(char const *print, ...);
void	ft_printchar(char c, size_t *i);
void	ft_printstr(char *print, size_t *i);
void	ft_printdori(int n, size_t *i);
void	ft_printunsig(unsigned int n, size_t *i);
void	ft_printhex(unsigned int n, size_t *i);
void	ft_printuphex(unsigned int n, size_t *i);
void	ft_printmemptr(unsigned long int n, size_t *i);

#endif