/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:11:57 by atrujill          #+#    #+#             */
/*   Updated: 2022/05/12 10:05:01 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	while (i < len_src && len_dest + i + 1 < destsize)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = 0;
	if (len_dest < destsize)
		return (len_dest + len_src);
	else
		return (destsize + len_src);
	return (0);
}
