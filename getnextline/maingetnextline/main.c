/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:33:50 by alruiz-c          #+#    #+#             */
/*   Updated: 2022/12/13 12:37:55 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int fd;
	char *str;

	fd = open("prueba.txt", O_RDONLY);

	str = get_next_line(fd);

	while (str != NULL)
	{
		printf("cadena leida: %s", str);
		str = get_next_line(fd);
	}
	return (0);
}