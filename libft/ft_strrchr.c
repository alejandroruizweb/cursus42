/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:21:46 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/09/30 09:56:53 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	c_unsigned;
	int				last;

	c_unsigned = c;
	if (c_unsigned == '\0')
		return ((char *)&s[ft_strlen(s)]);
	last = ft_strlen(s) - 1;
	if (last < 0)
		return (NULL);
	while (last >= 0)
	{
		if (s[last] == c_unsigned)
			return ((char *)&s[last]);
		last--;
	}
	return (NULL);
}
