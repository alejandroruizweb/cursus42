/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:02:19 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/06/13 11:42:13 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	init(t_data *data, int argnum, char **arg)
{
	int	i;

	i = 0;
	data->stack_a = malloc((argnum - 1) * sizeof(t_stack));
	data->stack_b = malloc((argnum - 1) * sizeof(t_stack));
	data->total_parameters = argnum - 1;
	data->len_a = data->total_parameters;
	data->len_b = 0;
	data->pos_media = data->len_a / 2;
	while (i < argnum - 1)
	{
		data->stack_a[i].value = ft_atoi(arg[i + 1]);
		data->stack_a[i].index = ft_atoi(arg[i + 1]);
		i++;
	}
	pos_index (data);
	position(data);
	data->max = data->stack_a[data->len_a - 1].index;
	print_stack_a(data);
}
