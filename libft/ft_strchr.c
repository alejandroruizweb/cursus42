/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:46:13 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/18 15:18:02 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*STRCHR = Devuelve la string a partir de coincidir con el caracter c.*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c_unsigned;

	c_unsigned = c;
	if (c_unsigned == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (*s != '\0')
	{
		if (*s == c_unsigned)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
