/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:52:56 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/20 17:37:43 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*MEMCHR = Busca el caracter c en la string s en n caracteres. Si lo encuentra
devuelve la string a partir de ese caracter*/
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s) == (unsigned char)c)
			return ((void *)s);
		i++;
		s++;
	}
	return (NULL);
}
