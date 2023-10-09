/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:03:58 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/06 12:42:50 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ISDIGIT = Si el caracter está entre el 0 y el 9 se devuelve 1. */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
