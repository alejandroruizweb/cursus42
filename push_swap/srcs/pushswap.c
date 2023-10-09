/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:16:22 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/10/06 14:26:43 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	check_data(t_data *data, int argnum, char **new_data)
{
	int	i;

	i = 1;
	(void)*data;
	is_duplicate(new_data, argnum);
	while (new_data[i])
	{
		limits(new_data[i]);
		is_number(new_data[i]);
		i++;
	}
	if (is_sort(new_data, argnum))
		exit(1);
	else
	{
		init(data, argnum, new_data);
		free(data->stack_a);
		free(data->stack_b);
	}
}

int	main(int argnum, char **arg)
{
	t_data	data;
	int		i;
	char	**new_data;
	char	*aux;

	i = 0;
	if (argnum == 2)
	{
		aux = ft_strjoin("X ", arg[1]);
		new_data = ft_split(aux, 32);
		free(aux);
		while (new_data[i] != NULL)
			i++;
		check_data(&data, i, new_data);
		i = -1;
		while (new_data[++i] != NULL)
			free(new_data[i]);
		free(new_data);
	}
	else if (argnum > 2)
	{
		new_data = arg;
		check_data(&data, argnum, new_data);
	}
	return (0);
}
