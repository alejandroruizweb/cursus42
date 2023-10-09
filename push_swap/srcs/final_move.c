/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_move.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:16:11 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/10/05 12:16:48 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	final_move(t_data *data)
{
	go_pos(data);
	while (pos_index_min(data) != 0)
	{
		if (pos_index_min(data) <= data->len_a / 2)
			ra(data, 0);
		else if (pos_index_min(data) > data->len_a / 2)
			rra(data, 0);
		go_pos(data);
	}
}

int	is_sort_end(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->len_a - 1)
	{
		j = i + 1;
		if (data->stack_a[i].value < data->stack_a[j].value)
			i++;
		else
		{
			ft_printf("KO.\n");
			return (0);
		}
	}
	ft_printf("OK.\n");
	return (1);
}
