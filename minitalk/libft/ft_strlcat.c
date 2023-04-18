/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:38:08 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/20 17:39:34 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRLCAT = Esta función es un poco compleja de explicar. Si size es 0 retorna
el tamaño de src. size es menor que el tamaño de dst retorna tamaño de
src + size. Si size es >= que el tamaño de dst retorna tamaño de src + dst.
Copia caracteres de src al final de dst solo cuando el tamaño de dst + 1
sea igual o mayor que size.*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		valor;
	size_t	count1;
	size_t	count2;

	if (size == 0)
		return (ft_strlen(src));
	else if (size < ft_strlen(dst))
		valor = ft_strlen(src) + size;
	else
		valor = ft_strlen(src) + ft_strlen(dst);
	count1 = 0;
	while (dst[count1] != '\0')
		count1++;
	count2 = 0;
	while (src[count2] != '\0' && count1 + 1 < size)
	{
		dst[count1] = src[count2];
		count1++;
		count2++;
	}
	dst[count1] = '\0';
	return (valor);
}
