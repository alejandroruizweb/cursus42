/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:36:22 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/04 16:21:00 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		if (*(unsigned char *)s1 > *(unsigned char *)s2)
			return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
		if (*(unsigned char *)s1 < *(unsigned char *)s2)
			return ((*(unsigned char *)s1) - (*(unsigned char *)s2));
		s1++;
		s2++;
		i++;
	}
	return (0);
}
