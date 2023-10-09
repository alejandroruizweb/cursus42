/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:01:11 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/10/06 14:25:08 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	sa(t_data *data, int print_operation)
{
	t_stack	aux;

	if (data->len_a > 1)
	{
		aux = data->stack_a[0];
		data->stack_a[0] = data->stack_a[1];
		data->stack_a[1] = aux;
	}
	if (print_operation == 0)
		ft_printf("sa\n");
}

void	sb(t_data *data, int print_operation)
{
	t_stack	aux;

	if (data->len_b > 1)
	{
		aux = data->stack_b[0];
		data->stack_b[0] = data->stack_b[1];
		data->stack_b[1] = aux;
	}
	if (print_operation == 0)
		ft_printf("sb\n");
}

void	ss(t_data *data)
{
	sa(data, 1);
	sb(data, 1);
	ft_printf("ss\n");
}

void	pa(t_data *data)
{
	if (data->len_a == 0)
		data->stack_a[0] = data->stack_b[0];
	else
	{
		down_a(data);
		data->stack_a[0] = data->stack_b[0];
	}
	up_b(data);
	data->len_a++;
	ft_printf("pa\n");
}

void	pb(t_data *data)
{
	if (data->len_b == 0)
		data->stack_b[0] = data->stack_a[0];
	else
	{
		down_b(data);
		data->stack_b[0] = data->stack_a[0];
	}
	up_a(data);
	data->len_b++;
	ft_printf("pb\n");
}
