/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:44:32 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/20 11:36:51 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Devuelve un sbstring de "s" que comienze en el caracter start con len
caracteres.*/
#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*src;

	i = 0;
	if (start >= ft_strlen(s))
	{
		src = (char *)malloc(sizeof(*s));
		*src = 0;
		return (src);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	src = (char *)malloc(sizeof(*s) * (len + 1));
	if (!src)
		return (NULL);
	while (s[start + i] && i < len)
	{
		src[i] = s[start + i];
		i++;
	}
	src[i] = '\0';
	return (src);
}

//int	main()
//{
//	printf("%s \n", ft_substr("hola que tal", 3, 5));
//}