/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:55:20 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/06/13 11:50:50 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	pos_index(t_data *data)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (i < data->total_parameters)
	{
		if (data->stack_a[i + 1].index > data->stack_a[i].index)
		{
			aux = data->stack_a[i + 1].index;
			data->stack_a[i + 1].index = data->stack_a[i].index;
			data->stack_a[i].index = aux;
			i = 0;
		}
		else
			i++;
	}
}

void	position(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->len_a)
	{
		j = 0;
		while (j < data->len_a)
		{
			if (data->stack_a[i].value == data->stack_a[j].index)
				data->stack_a[i].pos = j;
			j++;
		}
		i++;
	}
	data->max2 = data->stack_a[data->len_a - 2].index;
	data->max3 = data->stack_a[data->len_a - 3].index;
}

void	print_stack_a(t_data *data)
{
	int	j;

	j = 0;
	while (j < data->total_parameters)
	{
		ft_printf("El valor %i es: %i, ", j, data->stack_a[j].value);
		ft_printf("El index %i es: %i, ", j, data->stack_a[j].index);
		ft_printf("La posición %i es: %i\n", j, data->stack_a[j].pos);
		j++;
	}
}
