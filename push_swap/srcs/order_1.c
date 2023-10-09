/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:55:20 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/10/06 14:25:56 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	go_index(t_data *data)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	while (i < data->total_parameters)
	{
		aux = 1;
		j = 0;
		while (j < data->total_parameters)
		{
			if (data->stack_a[i].value > data->stack_a[j].value)
				aux++;
			j++;
		}
		data->stack_a[i].index = aux;
		i++;
	}
}

void	go_pos(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->len_a)
	{
		data->stack_a[i].pos = i;
		i++;
	}
	i = 0;
	while (i < data->len_b)
	{
		data->stack_b[i].pos = i;
		i++;
	}
}

void	pos_ob(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	go_pos(data);
	while (i < data->len_b)
	{
		j = 0;
		data->stack_b[i].pos_ob = 0;
		if (data->stack_b[i].index > index_max(data)
			|| data->stack_b[i].index < index_min(data))
			data->stack_b[i].pos_ob = pos_index_min(data);
		else
		{
			while ((j + 1) < data->len_a)
			{
				if (data->stack_b[i].index > data->stack_a[j].index
					&& data->stack_b[i].index < data->stack_a[j + 1].index)
					data->stack_b[i].pos_ob = data->stack_a[j].pos + 1;
			j++;
			}
		}
	i++;
	}
}
