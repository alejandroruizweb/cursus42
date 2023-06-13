/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:14:05 by atrujill          #+#    #+#             */
/*   Updated: 2022/05/12 10:07:44 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = numlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	len--;
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[len] = ((n % 10) + '0');
		n /= 10;
		len--;
	}
	return (str);
}
