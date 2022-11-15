/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:42:20 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/18 10:38:57 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Lst es el puntero al principio de la lista*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
