/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 15:50:42 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/06 12:28:08 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ISALPHA = Si el caracter está entre la a y la z (mayúscula o minúscula)
se devuelve 1. */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
