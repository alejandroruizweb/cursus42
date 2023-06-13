/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:33:44 by atrujill          #+#    #+#             */
/*   Updated: 2022/12/09 11:02:17 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_char(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] == '-' && ft_strlen(str) == 1)
			|| (str[i] == '+' && ft_strlen(str) == 1))
			ft_error(1);
		if (str[i] != '-' && str[i] != '+' && str[i] != ' '
			&& !ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

void	duplicate(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi_long(argv[i]) == ft_atoi_long(argv[j]))
				ft_error(0);
			j++;
		}
		i++;
	}
}

void	check_limits_and_char(char **argv, int argc)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (is_char(argv[i]))
			ft_error(0);
		if ((ft_atoi_long(argv[i]) <= INT_MIN)
			|| (ft_atoi_long(argv[i]) >= INT_MAX))
			ft_error(0);
		i++;
	}
}

void	second_part(t_data *all_data, int argc, char **newdata)
{
	check_limits_and_char(newdata, argc);
	duplicate(newdata, argc);
	if (is_sort(newdata, argc))
		exit(1);
	else
	{
		init(all_data, argc, newdata);
		free(all_data->stack_a);
		free(all_data->stack_b);
	}	
}

int	main(int argc, char **argv)
{
	t_data	all_data;
	int		i;
	char	**newdata;

	i = 0;
	if (argc >= 2)
	{
		if (ft_strchr(argv[1], 32))
		{
			newdata = ft_split(argv[1], 32);
			while (newdata[i] != NULL)
				i++;
			argc = i + 1;
			while (i > 0)
			{
				newdata[i] = newdata[i - 1];
				i--;
			}
			newdata[0] = argv[0];
		}
		else
			newdata = argv;
		second_part(&all_data, argc, newdata);
	}
	return (0);
}
