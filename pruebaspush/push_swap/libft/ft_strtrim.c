/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:34:56 by atrujill          #+#    #+#             */
/*   Updated: 2022/05/12 10:02:53 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str1, char const *set)
{
	size_t	size_s;
	char	*newstr;

	if (!str1 || !set)
		return (0);
	while (*str1 && ft_strchr(set, *str1))
		str1++;
	size_s = ft_strlen(str1);
	while (size_s && ft_strchr(set, str1[size_s]))
		size_s--;
	newstr = ft_substr((char *)str1, 0, size_s + 1);
	return (newstr);
}
