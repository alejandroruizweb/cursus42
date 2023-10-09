/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lets_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:31:11 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/10/06 14:24:37 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	do_rrr(t_data *data)
{
	while (data->min_cost_a < 0 && data->min_cost_b < 0)
	{
		rrr(data);
		data->min_cost_a++;
		data->min_cost_b++;
	}
}

void	do_rr(t_data *data)
{
	while (data->min_cost_a > 0 && data->min_cost_b > 0)
	{
		rr(data);
		data->min_cost_a--;
		data->min_cost_b--;
	}
}

void	do_ra(t_data *data)
{
	while (data->min_cost_a != 0)
	{
		if (data->min_cost_a > 0)
		{
			ra(data, 0);
			data->min_cost_a--;
		}
		else if (data->min_cost_a < 0)
		{
			rra(data, 0);
			data->min_cost_a++;
		}
	}
}

void	do_rb(t_data *data)
{
	while (data->min_cost_b != 0)
	{
		if (data->min_cost_b > 0)
		{
			rb(data, 0);
			data->min_cost_b--;
		}
		else if (data->min_cost_b < 0)
		{
			rrb(data, 0);
			data->min_cost_b++;
		}
	}
}

void	lets_move(t_data *data)
{
	if (data->min_cost_a < 0 && data->min_cost_b < 0)
	{
		do_rrr(data);
	}
	else if (data->min_cost_a > 0 && data->min_cost_b > 0)
	{
		do_rr(data);
	}
	do_ra(data);
	do_rb(data);
	pa(data);
}
