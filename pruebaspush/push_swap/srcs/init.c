/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:43:47 by atrujill          #+#    #+#             */
/*   Updated: 2023/05/30 16:14:05 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init(t_data *all_data, int argc, char **argv)
{
	int	i;

	i = 0;
	all_data->stack_a = malloc((argc - 1) * sizeof(t_stack));
	all_data->stack_b = malloc((argc - 1) * sizeof(t_stack));
	all_data->total_parameters = argc - 1;
	all_data->len_a = all_data->total_parameters;
	all_data->len_b = 0;
	all_data->pos_media = all_data->len_a / 2;
	while (i < argc)
	{
		all_data->stack_a[i].value = ft_atoi(argv[i + 1]);
		all_data->stack_a[i].operation = ft_atoi(argv[i + 1]);
		i++;
	}
	ordena(all_data);
	position(all_data);
	all_data->max = all_data->stack_a[all_data->len_a - 1].operation;
	ft_traslade(all_data);
	last_dance(all_data);
}

void	last_dance(t_data *all_data)
{
	int	i;

	i = 0;
	while (all_data->len_b > 0)
	{
		all_dest(all_data);
		go_a(all_data);
		i++;
	}
	go_head(all_data);
}

void	go_head(t_data *all_data)
{
	int	min;
	int	pos;

	min = lower(all_data);
	pos = exist_a(all_data, min);
	while (all_data->stack_a[0].pos != min)
	{
		if (pos < all_data->len_a / 2)
			ra(all_data, 0);
		else
			rra(all_data, 0);
	}
}

int	lower(t_data *all_data)
{
	int	i;
	int	min;

	i = 0;
	min = all_data->stack_a[0].pos;
	while (i < all_data->len_a)
	{
		if (all_data->stack_a[i + 1].pos < min)
			min = all_data->stack_a[i + 1].pos;
		i++;
	}
	return (min);
}
