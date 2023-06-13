/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:02:49 by atrujill          #+#    #+#             */
/*   Updated: 2022/12/05 13:57:49 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	if_3(t_data *all_data)
{
	if (all_data->stack_a[0].value > all_data->stack_a[1].value
		&& all_data->stack_a[0].value > all_data->stack_a[2].value)
		ra(all_data, 0);
	else if (all_data->stack_a[1].value > all_data->stack_a[0].value
		&& all_data->stack_a[1].value > all_data->stack_a[2].value)
		rra(all_data, 0);
	if (all_data->stack_a[0].value > all_data->stack_a[1].value)
		sa(all_data, 0);
}

int	next_num(t_data *all_data, int dato)
{
	int	i;
	int	result;
	int	num_max;

	i = 0;
	num_max = 2147483647;
	while (i < all_data->len_a)
	{
		if (all_data->stack_a[i].pos > dato)
		{
			if ((all_data->stack_a[i].pos - dato) < num_max)
			{
				num_max = all_data->stack_a[i].pos - dato;
				result = all_data->stack_a[i].pos;
			}
		}
		i++;
	}
	return (result);
}

int	exist_a(t_data *all_data, int dato)
{
	int	i;

	i = 0;
	while (i < all_data->len_a)
	{
		if (all_data->stack_a[i].pos == dato)
		{
			if (i > all_data->len_a / 2)
				return (0 - (all_data->len_a - i));
			else
				return (i);
		}
		i++;
	}
	return (-1);
}

void	all_dest(t_data *all_data)
{
	int	i;
	int	pos_a;
	int	next;

	i = 0;
	pos_a = 0;
	while (i < all_data->len_b)
	{
		if (all_data->stack_b[i].pos < all_data->len_b / 2)
		{
			all_data->stack_b[i].cost_b = -1 * (all_data->len_b - i);
		}
		else
			all_data->stack_b[i].cost_b = i;
		next = next_num(all_data, all_data->stack_b[i].pos);
		pos_a = exist_a(all_data, next);
		all_data->stack_b[i].cost_a = pos_a;
		all_data->stack_b[i].dest = abs(all_data->stack_b[i].cost_b)
			+ abs(all_data->stack_b[i].cost_a);
		i++;
	}
}
