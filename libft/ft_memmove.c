/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:30:23 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/18 15:17:29 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*MEMMOVE = Copia los primeros "len" caracteres de src a dst y te mantiene los
restantes caracteres de dst*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == src || !len)
		return (dst);
	if (dst < src)
	{
		while (i < len)
		{
		((char *) dst)[i] = ((char *) src)[i];
		i++;
		}
	}
	else
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}	
	return (dst);
}
