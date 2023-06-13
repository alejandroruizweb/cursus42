/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 17:46:14 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/05/04 18:47:43 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_valid(char *str, int *strnumber, int index)
{
	int	j;
	int	number;

	j = 0;
	number = 0;
	while (str[j] != '\0')
	{
		if (ft_isdigit(str[j]))
			j++;
		else
			return (0);
	}
	j = index - 1;
	while (strnumber[index] && j >= 0)
	{
		number = ft_atoi(str);
		if (number == strnumber[j])
		{
			free (strnumber);
			return (0);
		}
		else
			j--;
	}
	return (1);
}
