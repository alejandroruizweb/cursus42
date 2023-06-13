/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:36:28 by atrujill          #+#    #+#             */
/*   Updated: 2023/06/08 13:17:50 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <ctype.h>
# include <limits.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				operation;
	int				pos;
	int				dest;
	int				cost_a;
	int				cost_b;
}					t_stack;

typedef struct s_data
{
	struct s_stack	*stack_a;
	struct s_stack	*stack_b;
	int				total_parameters;
	int				pos_media;
	int				max;
	int				max2;
	int				max3;
	int				len_a;
	int				len_b;
	int				temp_comun_mov;
	int				temp_obj_a;
	int				temp_obj_b;
	int				temp_sig_obj_a;
	int				temp_sig_obj_b;
}					t_data;

long long			ft_atoi_long(const char *str);
void				ft_error(int n);
void				init(t_data *all_data, int argc, char **argv);
void				ordena(t_data *all_data);
void				ft_traslade(t_data *all_data);
void				position(t_data *all_data);
void				pb(t_data *all_data);
void				pa(t_data *all_data);
void				up_a(t_data *all_data);
void				up_b(t_data *all_data);
void				down_b(t_data *all_data);
void				down_a(t_data *all_data);
void				sa(t_data *all_data, int control);
void				sb(t_data *all_data, int control);
void				ss(t_data *all_data);
void				ra(t_data *all_data, int control);
void				rb(t_data *all_data, int control);
void				rr(t_data *all_data);
void				rra(t_data *all_data, int control);
void				rrb(t_data *all_data, int control);
void				rrr(t_data *all_data);
void				if_3(t_data *all_data);
void				last_dance(t_data *all_data);
void				all_dest(t_data *all_data);
int					exist_a(t_data *all_data, int dato);
int					next_num(t_data *all_data, int dato);
void				go_a(t_data *all_data);
int					low_cost(t_data *all_data);
void				go_a1(t_data *all_data, int i);
void				go_a2(t_data *all_data);
void				go_head(t_data *all_data);
int					lower(t_data *all_data);
void				last_number(t_data *all_data);
int					is_sort(char **newdata, int argc);
#endif
