/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:07:11 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/09/13 14:36:01 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	up_a(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->len_a)
	{
		data->stack_a[i] = data->stack_a[i + 1];
		i++;
	}
	data->len_a--;
}

void	up_b(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->len_b)
	{
		data->stack_b[i] = data->stack_b[i + 1];
		i++;
	}
	data->len_b--;
}

void	down_a(t_data *data)
{
	int	i;

	i = data->len_a;
	while (i > 0)
	{
		data->stack_a[i] = data->stack_a[i - 1];
		i--;
	}
}

void	down_b(t_data *data)
{
	int	i;

	i = data->len_b;
	while (i > 0)
	{
		data->stack_b[i] = data->stack_b[i - 1];
		i--;
	}
}
