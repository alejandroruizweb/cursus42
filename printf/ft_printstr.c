/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:11:45 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/10/25 16:18:03 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstr(char *print, size_t *i)
{
	if (!print)
		print = "(null)";
	while (*print)
	{
		ft_printchar(*print, i);
		print++;
	}
}
