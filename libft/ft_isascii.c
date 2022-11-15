/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:50:27 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/06 12:41:45 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ISASCII = Si el caracter está entre los caracteres ascii 0 y 127 
se devuelve 1. */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
