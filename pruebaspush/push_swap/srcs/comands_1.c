/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comands_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:09:33 by atrujill          #+#    #+#             */
/*   Updated: 2022/12/05 13:45:47 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pb(t_data *all_data)
{
	if (all_data->len_b == 0)
		all_data->stack_b[0] = all_data->stack_a[0];
	else
	{
		down_b(all_data);
		all_data->stack_b[0] = all_data->stack_a[0];
	}
	up_a(all_data);
	all_data->len_b++;
	write(1, "pb\n", 3);
}

void	up_a(t_data *all_data)
{
	int	i;

	i = 0;
	while (i < all_data->len_a)
	{
		all_data->stack_a[i] = all_data->stack_a[i + 1];
		i++;
	}
	all_data->len_a--;
}

void	down_b(t_data *all_data)
{
	int	i;

	i = all_data->len_b;
	while (i > 0)
	{
		all_data->stack_b[i] = all_data->stack_b[i - 1];
		i--;
	}
}

void	down_a(t_data *all_data)
{
	int	i;

	i = all_data->len_a;
	while (i > 0)
	{
		all_data->stack_a[i] = all_data->stack_a[i - 1];
		i--;
	}
}

void	up_b(t_data *all_data)
{
	int	i;

	i = 0;
	while (i < all_data->len_b)
	{
		all_data->stack_b[i] = all_data->stack_b[i + 1];
		i++;
	}
	all_data->len_b--;
}
