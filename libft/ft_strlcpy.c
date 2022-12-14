/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:12:48 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/18 15:18:23 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRLCPY = Copia "size" caracteres -1 de src a dst y devuelve 
el tamaño de src*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	idx;

	i = 0;
	idx = 0;
	while (src[i])
		i++;
	while (src[idx] && idx + 1 < size)
	{
		((char *) dst)[idx] = ((char *) src)[idx];
		idx++;
	}
	if (size)
		dst[idx] = '\0';
	return (i);
}
