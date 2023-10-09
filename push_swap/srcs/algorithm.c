/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:13:45 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/10/06 14:24:21 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	algorithm(t_data *data)
{
	if (data->total_parameters == 2)
		two_argnum(data);
	else if (data->total_parameters == 3)
		three_argnum(data);
	else if (data->total_parameters > 3)
		more_three(data);
}

void	two_argnum(t_data *data)
{
	sa(data, 0);
}

void	three_argnum(t_data *data)
{
	if (data->stack_a[0].value > data->stack_a[1].value
		&& data->stack_a[0].value > data->stack_a[2].value)
		ra(data, 0);
	else if (data->stack_a[1].value > data->stack_a[0].value
		&& data->stack_a[1].value > data->stack_a[2].value)
		rra(data, 0);
	if (data->stack_a[0].value > data->stack_a[1].value)
		sa(data, 0);
}

void	more_three(t_data *data)
{
	while (data->len_a > 3)
	{
		pb(data);
	}
	three_argnum(data);
	go_pos(data);
	while (data->len_b > 0)
	{
		pos_ob(data);
		cost_calculation(data);
		pos_ob(data);
		cost_calculation(data);
		minimal_movement(data);
	}
	final_move(data);
}
