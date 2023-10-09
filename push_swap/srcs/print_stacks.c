/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:08:01 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/10/06 14:26:36 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pushswap.h"

void	print_stack_a(t_data *data)
{
	int	j;

	j = 0;
	ft_printf("Stack_a\n");
	while (j < data->len_a)
	{
		ft_printf("%i\n", data->stack_a[j].value);
		j++;
	}
}

void	print_stack_b(t_data *data)
{
	int	j;

	j = 0;
	ft_printf("Stack_b\n");
	while (j < data->len_b)
	{
		ft_printf("%i\n", data->stack_b[j].value);
		j++;
	}
}

void	print_stacks(t_data *data)
{
	print_stack_a(data);
	print_stack_b(data);
}
