/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 09:15:30 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/10/06 14:26:03 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int	pos_index_min(t_data *data)
{
	int	i;
	int	i_min;
	int	result;

	i = 0;
	i_min = data->max + 1;
	result = 0;
	while (i < data->len_a)
	{
		if (i_min > data->stack_a[i].index)
		{
			i_min = data->stack_a[i].index;
			result = data->stack_a[i].pos;
		}
		i++;
	}
	return (result);
}

int	index_min(t_data *data)
{
	int	i;
	int	i_min;
	int	result;

	i = 0;
	i_min = data->max + 1;
	result = 0;
	while (i < data->len_a)
	{
		if (i_min > data->stack_a[i].index)
		{
			i_min = data->stack_a[i].index;
		}
		i++;
	}
	return (i_min);
}

int	index_max(t_data *data)
{
	int	i;
	int	i_max;
	int	result;

	i = 0;
	i_max = 0;
	result = 0;
	while (i < data->len_a)
	{
		if (i_max < data->stack_a[i].index)
		{
			i_max = data->stack_a[i].index;
		}
		i++;
	}
	return (i_max);
}
