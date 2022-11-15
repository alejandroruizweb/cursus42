/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:33:10 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/06 12:42:28 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ISPRINT = Si el caracter está entre los caracteres ascii 32 y 126 
se devuelve 1. */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
