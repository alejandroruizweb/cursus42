/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:24:51 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/18 15:17:39 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*MEMSET = Escribe "c" un número de veces "len" en el string "b"*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}
