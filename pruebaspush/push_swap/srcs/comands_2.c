/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comands_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:30:05 by atrujill          #+#    #+#             */
/*   Updated: 2022/12/05 14:11:54 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_data *all_data, int control)
{
	t_stack	aux;

	if (all_data->len_a >= 2)
	{
		aux = all_data->stack_a[0];
		all_data->stack_a[0] = all_data->stack_a[1];
		all_data->stack_a[1] = aux;
	}
	if (control == 0)
		write(1, "sa\n", 3);
}

void	sb(t_data *all_data, int control)
{
	t_stack	aux;

	if (all_data->len_a >= 2)
	{
		aux = all_data->stack_b[0];
		all_data->stack_b[0] = all_data->stack_b[1];
		all_data->stack_b[1] = aux;
	}
	if (control == 0)
		write(1, "sb\n", 3);
}

void	pa(t_data *all_data)
{
	if (all_data->len_a == 0)
		all_data->stack_a[0] = all_data->stack_b[0];
	else
	{
		down_a(all_data);
		all_data->stack_a[0] = all_data->stack_b[0];
	}
	up_b(all_data);
	all_data->len_a++;
	write(1, "pa\n", 3);
}

void	ss(t_data *all_data)
{
	sa(all_data, 1);
	sb(all_data, 1);
	write(1, "ss\n", 3);
}

void	ra(t_data *all_data, int control)
{
	t_stack	aux;

	aux = all_data->stack_a[0];
	up_a(all_data);
	all_data->stack_a[all_data->len_a] = aux;
	all_data->len_a++;
	if (control == 0)
		write(1, "ra\n", 3);
}
