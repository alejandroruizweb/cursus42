/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:19:09 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/20 11:50:59 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Elimina de s1 los caracteres que se dan en set desde el principio y
desde el final.*/
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
	{
		i--;
	}
	str = ft_substr ((char *)s1, 0, i + 1);
	return (str);
}

//int	main()
//{
//	printf("%s \n", ft_strtrim("0155555550", "05"));
//}