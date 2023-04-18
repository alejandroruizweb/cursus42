/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:42:23 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/18 15:17:01 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Creamos un nuevo nodo que apunta al contenido de content. Como este newnodo
es el primer (y último nodo) tiene que apuntar a NULL*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnodo;

	newnodo = (t_list *)malloc(sizeof(t_list));
	if (!newnodo)
		return (NULL);
	newnodo->content = content;
	newnodo->next = NULL;
	return (newnodo);
}
