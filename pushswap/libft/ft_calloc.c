/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:02:40 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/06 16:26:57 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Calloc = Reserva memoria para alojar "count" variables de un tamaño "size".
Esas variables se inician en '0'. Con Malloc reservamos la memoria necesaria
count * size y con bzero le asignamos un valor de 0. */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, size * count);
	return (ptr);
}
