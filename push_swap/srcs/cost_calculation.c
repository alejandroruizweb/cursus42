/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_calculation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:41:11 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/10/06 14:24:27 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

int	number_totalizer(int number)
{
	if (number < 0)
		return (number * -1);
	return (number);
}

void	cost_calculation(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->len_b)
	{
		data->stack_b[i].cost_b = data->stack_b[i].pos;
		if (data->stack_b[i].pos > (data->len_b / 2))
			data->stack_b[i].cost_b = (data->len_b - data->stack_b[i].pos) * -1;
		data->stack_b[i].cost_a = data->stack_b[i].pos_ob;
		if (data->stack_b[i].pos_ob > data->len_a / 2)
			data->stack_b[i].cost_a = (data->len_a - data->stack_b[i].pos_ob)
				* -1;
		i++;
	}
}

void	minimal_movement(t_data *data)
{
	int	minimal_move;
	int	i;
	int	imin;

	minimal_move = INT_MAX;
	i = 0;
	while (i < data->len_b)
	{
		if (number_totalizer(data->stack_b[i].cost_a)
			+ number_totalizer(data->stack_b[i].cost_b)
			< minimal_move)
		{
			minimal_move = number_totalizer(data->stack_b[i].cost_b)
				+ number_totalizer(data->stack_b[i].cost_a);
			data->min_cost_a = data->stack_b[i].cost_a;
			data->min_cost_b = data->stack_b[i].cost_b;
			imin = i;
		}
	i++;
	}
	lets_move(data);
}
