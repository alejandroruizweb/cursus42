/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:47:58 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/18 15:18:29 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* STRLEN = Devuelve el número de caracteres antes de '\0' del string "s"*/
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
