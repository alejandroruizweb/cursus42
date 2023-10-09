/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:42:23 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/10/06 14:40:01 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Creamos un nuevo nodo que apunta al contenido de content. Como este newnodo
es el primer (y último nodo) tiene que apuntar a NULL*/
#include "libft.h"

t_stack	*ft_lstnew(int value)
{
	t_stack	*newnodo;

	newnodo = (t_stack *)malloc(sizeof(t_stack));
	if (!newnodo)
		return (NULL);
	newnodo->value = value;
	newnodo->index = 0;
	newnodo->index = 0;
	newnodo->next = NULL;
	return (newnodo);
}
