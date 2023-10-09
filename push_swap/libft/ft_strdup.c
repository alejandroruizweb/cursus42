/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:32:49 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/06 11:53:58 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* STRDUP = Devuelve un puntero a una string nueva ("ptr") que es un duplicado 
de la string "s1". La memoria se reserva con malloc. */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(sizeof(*ptr) * (ft_strlen(s1) + 1));
	if (ptr == NULL)
		return (0);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
