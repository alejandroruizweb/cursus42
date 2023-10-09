/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:21:01 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/10/06 14:25:42 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	ra(t_data *data, int print_operation)
{
	t_stack	aux;

	aux = data->stack_a[0];
	up_a(data);
	data->stack_a[data->len_a] = aux;
	data->len_a++;
	if (print_operation == 0)
	{
		ft_printf("ra\n");
	}
}

void	rb(t_data *data, int print_operation)
{
	t_stack	aux;

	aux = data->stack_b[0];
	up_b(data);
	data->stack_b[data->len_b] = aux;
	data->len_b++;
	if (print_operation == 0)
	{
		ft_printf("rb\n");
	}
}

void	rr(t_data *data)
{
	ra(data, 1);
	rb(data, 1);
	ft_printf("rr\n");
}

void	rra(t_data *data, int print_operation)
{
	t_stack	aux;

	aux = data->stack_a[data->len_a - 1];
	down_a(data);
	data->stack_a[0] = aux;
	if (print_operation == 0)
	{
		ft_printf("rra\n");
	}
}

void	rrb(t_data *data, int print_operation)
{
	t_stack	aux;

	aux = data->stack_b[data->len_b - 1];
	down_b(data);
	data->stack_b[0] = aux;
	if (print_operation == 0)
	{
		ft_printf("rrb\n");
	}
}
