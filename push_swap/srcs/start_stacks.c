/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:02:19 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/10/06 14:26:48 by alruiz-c         ###   ########.fr       */
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
	while (i < argnum - 1)
	{
		data->stack_a[i].value = ft_atoi(arg[i + 1]);
		i++;
	}
	go_index(data);
	data->max = data->len_a;
	algorithm(data);
}
