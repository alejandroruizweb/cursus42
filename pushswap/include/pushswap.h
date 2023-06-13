/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:57:42 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/06/13 12:15:22 by alruiz-c         ###   ########.fr       */
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
	int					pos_media;
	int					max;
	int					max2;
	int					max3;
	int					len_a;
	int					len_b;
	int					temp_comun_mov;
	int					temp_obj_a;
	int					temp_obj_b;
	int					temp_sig_obj_a;
	int					temp_sig_obj_b;
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
void	sa(t_data *data, int print_operation);
#endif