/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:27:53 by atrujill          #+#    #+#             */
/*   Updated: 2022/05/12 10:07:15 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	if (dest < src)
	{
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			*(char *)(dest + n - 1) = *(char *)(src + n - 1);
			n--;
		}
	}
	return (dest);
}
