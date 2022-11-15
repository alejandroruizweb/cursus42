/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:33:38 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/18 15:16:29 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ISALNUM = Si el caracter está entre la a y la z (mayúscula o minúscula) y el
0 y el 9 se devuelve 1. */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
