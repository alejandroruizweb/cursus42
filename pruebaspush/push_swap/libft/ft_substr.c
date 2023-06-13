/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:42:33 by atrujill          #+#    #+#             */
/*   Updated: 2022/05/17 15:54:23 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (slen < start)
		len = 0;
	else if (slen + start < len)
		len = slen;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (start < slen && i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
