/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_push_swap.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:02:23 by atrujill          #+#    #+#             */
/*   Updated: 2022/12/09 10:51:20 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(int n)
{
	(void)n;
	write(1, "Error\n", 6);
	exit(EXIT_FAILURE);
}

static long long	operation(const char *str, long lenght, int sign)
{
	long long	r;

	r = 0;
	while (str[lenght] >= 48 && str[lenght] <= 57)
	{
		r = r * 10 + str[lenght] - '0';
		lenght++;
	}
	return (sign * r);
}

long long	ft_atoi_long(const char *str)
{
	long	lenght;
	int		sign;

	lenght = 0;
	sign = 1;
	while (str[lenght] == ' ' || str[lenght] == '\n' || str[lenght] == '\t'
		|| str[lenght] == '\r' || str[lenght] == '\f' || str[lenght] == '\v')
		lenght++;
	if (str[lenght] == '-' || str[lenght] == '+')
	{
		if (str[lenght] == '-')
			sign *= -1;
		lenght++;
	}
	return (operation(str, lenght, sign));
}

int	is_sort(char **newdata, int argc)
{
	int	i;

	i = 1;
	while (newdata[i])
	{
		if (i < argc - 1)
			if (ft_atoi(newdata[i]) > ft_atoi(newdata[i + 1]))
				return (0);
		i++;
	}
	return (1);
}
