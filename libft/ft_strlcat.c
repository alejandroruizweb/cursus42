/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:38:08 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/09/27 18:08:49 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	valor;
	int	count1;
	int	count2;

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
