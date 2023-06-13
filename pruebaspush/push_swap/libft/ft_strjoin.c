/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:07:56 by atrujill          #+#    #+#             */
/*   Updated: 2022/06/03 11:17:27 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (str1 && str2)
	{
		len1 = (ft_strlen(str1));
		len2 = (ft_strlen(str2));
		str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == 0)
			return (0);
		i = -1;
		while (str1[++i])
			str[i] = str1[i];
		i = -1;
		while (str2[++i])
		{
			str[len1] = str2[i];
			len1++;
		}
		str[len1] = '\0';
		return (str);
	}
	return (0);
}
