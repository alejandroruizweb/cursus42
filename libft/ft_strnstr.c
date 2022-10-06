/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:24:50 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/04 18:26:20 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
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
//	printf("%s \n", ft_strnstr("aaabcabcd", "aabc", -1));
//	printf("%s \n", strnstr("aaabcabcd", "aabc", -1));
//}