/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:02:20 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/18 15:17:23 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*MEMCPY = Copia "n" caracteres de src a dst y elimina lo que existía en dst.
Devuelve dst*/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (n == 0 || dst == src)
		return (dst);
	while (n > 0)
	{
		*str1++ = *str2++;
		n--;
	}
	return (dst);
}
