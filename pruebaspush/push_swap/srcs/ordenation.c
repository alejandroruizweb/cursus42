/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ordenation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:03:23 by atrujill          #+#    #+#             */
/*   Updated: 2022/12/09 10:59:08 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ordena(t_data *all_data)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	aux = 0;
	while (i < all_data->total_parameters)
	{
		j = 1;
		while (j < all_data->total_parameters)
		{
			if (all_data->stack_a[j].operation < all_data->stack_a[j
					- 1].operation)
			{
				aux = all_data->stack_a[j].operation;
				all_data->stack_a[j].operation = all_data->stack_a[j
					- 1].operation;
				all_data->stack_a[j - 1].operation = aux;
			}
			j++;
		}
		i++;
	}
}

void	ft_traslade(t_data *all_data)
{
	while (all_data->len_a > all_data->pos_media && all_data->len_a > 3)
	{
		if (all_data->stack_a[0].pos <= all_data->pos_media)
			pb(all_data);
		else
			ra(all_data, 0);
	}
	while (all_data->len_a > 3)
	{
		while (all_data->stack_a[0].value == all_data->max
			|| all_data->stack_a[0].value == all_data->max2
			|| all_data->stack_a[0].value == all_data->max3)
			ra(all_data, 0);
		pb(all_data);
	}
	if_3(all_data);
}

void	position(t_data *all_data)
{
	int	i;
	int	j;

	i = 0;
	while (i < all_data->len_a)
	{
		j = 0;
		while (j < all_data->len_a)
		{
			if (all_data->stack_a[i].value == all_data->stack_a[j].operation)
			{
				all_data->stack_a[i].pos = j;
			}
			j++;
		}
		i++;
	}
	all_data->max2 = all_data->stack_a[all_data->len_a - 2].operation;
	all_data->max3 = all_data->stack_a[all_data->len_a - 3].operation;
}
