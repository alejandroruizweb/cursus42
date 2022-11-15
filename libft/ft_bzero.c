/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:28:24 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/06 13:21:13 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*BZERO = Escribe '\0' "n" veces en el string "s"*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}
