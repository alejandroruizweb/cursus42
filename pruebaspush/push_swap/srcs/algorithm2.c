/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:37:34 by atrujill          #+#    #+#             */
/*   Updated: 2022/12/05 14:02:49 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	go_a(t_data *all_data)
{
	int	i;

	i = 0;
	all_data->temp_comun_mov = 0;
	while (i < all_data->len_b)
	{
		if (all_data->stack_b[i].dest == low_cost(all_data))
		{
			go_a1(all_data, i);
			go_a2(all_data);
			i = all_data->len_b;
		}
		i++;
	}
	pa(all_data);
}

int	low_cost(t_data *all_data)
{
	int	i;
	int	result;

	i = 0;
	result = all_data->stack_b[0].dest;
	while (i < all_data->len_b)
	{
		if (result > all_data->stack_b[i].dest)
			result = all_data->stack_b[i].dest;
		i++;
	}
	return (result);
}

void	go_a1(t_data *all_data, int i)
{
	int	j;

	j = 0;
	all_data->temp_obj_a = abs(all_data->stack_b[i].cost_a);
	all_data->temp_obj_b = abs(all_data->stack_b[i].cost_b);
	all_data->temp_sig_obj_a = all_data->stack_b[i].cost_a;
	all_data->temp_sig_obj_b = all_data->stack_b[i].cost_b;
	if ((all_data->stack_b[i].cost_a < 0
			&& all_data->stack_b[i].cost_b < 0)
		|| (all_data->stack_b[i].cost_a > 0
			&& all_data->stack_b[i].cost_b > 0))
	{
		if (abs(all_data->stack_b[i].cost_a) < abs(all_data->stack_b[i].cost_b))
			all_data->temp_comun_mov = abs(all_data->stack_b[i].cost_a);
		else
			all_data->temp_comun_mov = abs(all_data->stack_b[i].cost_b);
		while (j < all_data->temp_comun_mov)
		{
			if (all_data->temp_sig_obj_a < 0)
				rrr(all_data);
			else
				rr(all_data);
			j++;
		}
	}
}

void	go_a2(t_data *all_data)
{
	int	j;

	j = 0;
	all_data->temp_obj_a = all_data->temp_obj_a - all_data->temp_comun_mov;
	while (j < all_data->temp_obj_a)
	{
		if (all_data->temp_sig_obj_a < 0)
			rra(all_data, 0);
		else
			ra(all_data, 0);
		j++;
	}
	j = 0;
	all_data->temp_obj_b = all_data->temp_obj_b - all_data->temp_comun_mov;
	while (j < all_data->temp_obj_b)
	{
		if (all_data->temp_sig_obj_b < 0)
			rrb(all_data, 0);
		else
			rb(all_data, 0);
		j++;
	}
}
