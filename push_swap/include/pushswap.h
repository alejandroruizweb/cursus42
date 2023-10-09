/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:57:42 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/10/05 13:59:47 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "../libft/libft.h"
# include <ctype.h>
# include <limits.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_stack
{
	int					value;
	int					index;
	int					pos;
	int					pos_ob;
	int					cost_a;
	int					cost_b;
}						t_stack;

typedef struct s_data
{
	struct s_stack		*stack_a;
	struct s_stack		*stack_b;
	int					total_parameters;
	int					max;
	int					len_a;
	int					len_b;
	int					min_cost_a;
	int					min_cost_b;
}						t_data;

void	check_data(t_data *data, int argnum, char **new_data);
void	limits(char *str);
int		is_number(char *str);
void	is_duplicate(char **str, int argnum);
int		is_sort(char **str, int argnum);
void	init(t_data *data, int argnum, char **arg);
void	pos_index(t_data *data);
void	position(t_data *data);
void	print_stack_a(t_data *data);
void	print_stack_b(t_data *data);
void	print_stacks(t_data *data);
void	sa(t_data *data, int print_operation);
void	sb(t_data *data, int print_operation);
void	ss(t_data *data);
void	up_b(t_data *data);
void	up_a(t_data *data);
void	down_a(t_data *data);
void	down_b(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data, int print_operation);
void	rb(t_data *data, int print_operation);
void	rr(t_data *data);
void	rra(t_data *data, int print_operation);
void	rrb(t_data *data, int print_operation);
void	rrr(t_data *data);
void	check_comand(t_data *data);
void	two_argnum(t_data *data);
void	algorithm(t_data	*data);
void	three_argnum(t_data *data);
void	more_three(t_data *data);
void	go_index(t_data *data);
void	go_pos(t_data *data);
void	pos_ob(t_data *data);
void	cost_calculation(t_data *data);
void	minimal_movement(t_data *data);
int		number_totalizer(int number);
void	lets_move(t_data *data);
void	do_rrr(t_data *data);
void	do_rr(t_data *data);
void	do_ra(t_data *data);
void	do_rb(t_data *data);
int		pos_index_min(t_data *data);
int		index_max(t_data *data);
int		index_min(t_data *data);
void	final_move(t_data *data);
int		is_sort_end(t_data *data);
#endif