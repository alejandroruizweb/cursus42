/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comands_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrujill <atrujill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:22:23 by atrujill          #+#    #+#             */
/*   Updated: 2022/12/05 13:46:07 by atrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	rb(t_data *all_data, int control)
{
	struct s_stack	aux;
	int				i;

	i = 0;
	aux = all_data->stack_b[0];
	while (i < all_data->len_b)
	{
		all_data->stack_b[i] = all_data->stack_b[i + 1];
		i++;
	}
	all_data->stack_b[all_data->len_b - 1] = aux;
	if (control == 0)
		write(1, "rb\n", 3);
}

void	rr(t_data *all_data)
{
	ra(all_data, 1);
	rb(all_data, 1);
	write(1, "rr\n", 3);
}

void	rra(t_data *all_data, int control)
{
	t_stack	aux;

	aux = all_data->stack_a[all_data->len_a - 1];
	down_a(all_data);
	all_data->stack_a[0] = aux;
	if (control == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_data *all_data, int control)
{
	t_stack	aux;

	aux = all_data->stack_b[all_data->len_b - 1];
	down_b(all_data);
	all_data->stack_b[0] = aux;
	if (control == 0)
		write(1, "rrb\n", 4);
}

void	rrr(t_data *all_data)
{
	rra(all_data, 1);
	rrb(all_data, 1);
	write(1, "rrr\n", 4);
}
