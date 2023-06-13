/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:28:31 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/05/30 15:18:35 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	ft_error(int i)
{
	(void)i;
	ft_printf("Error\n");
	exit (EXIT_FAILURE);
}

void	limits(char *str)
{
	if (ft_atoi(str) >= 2147483647 || ft_atoi(str) <= -2147483648)
		ft_error(1);
}

int	is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '-' || str[i] == '+') && str[i + 1] == '\0')
			ft_error (1);
		else if ((str[i] == '-' || str[i] == '+') && ft_isdigit(str[i + 1]))
			i++;
		else if (!ft_isdigit(str[i]))
			ft_error (1);
		i++;
	}
	return (1);
}

void	is_duplicate(char **str, int argnum)
{
	int	i;
	int	j;

	i = 1;
	while (i < argnum)
	{
		j = i + 1;
		while (j < argnum)
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				ft_error(1);
			j++;
		}
		i++;
	}
}

int	is_sort(char **str, int argnum)
{
	int	i;
	int	j;

	i = 1;
	while (i < argnum - 1)
	{
		j = i + 1;
		if (ft_atoi(str[i]) < ft_atoi(str[j]))
			i++;
		else
			return (0);
	}
	ft_printf("Está ordenado.\n");
	return (1);
}
