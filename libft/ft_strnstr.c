/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:24:50 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/20 10:50:55 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Tiene que coincidir needle en la string haystack y a la vez encontar
un NULL en los len caracteres, te devuelve haystack*/
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			while (needle[j] != '\0' && j + i < len)
			{
				if (haystack[i + j] == needle[j] && needle[j + 1] == '\0')
					return ((char *)&haystack[i]);
				else if (haystack[i + j] != needle[j])
					break ;
				j++;
			}
		}
		i++;
	}
	return (0);
}

//int	main()
//{
//	printf("%s \n", ft_strnstr("abcdefghi", "bbc", 10));
//	printf("%s \n", strnstr("abcdefghi", "bbc", 10));
//}