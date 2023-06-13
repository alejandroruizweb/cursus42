/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:30:30 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/05/11 13:46:30 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Convierte un número de un string a un int*/
#include "libft.h"
#include <stdio.h>

long long	ft_atoi(const char *str)
{
	int				sign;
	long long		value;

	sign = 1;
	value = 0;
	while (*str == ' ' || *str == '\f' || *str == '\n'
		|| *str == '\r' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (ft_isdigit(*str))
	{
		value = value * 10 + (*str - '0');
		str++;
	}
	return (value * sign);
}
