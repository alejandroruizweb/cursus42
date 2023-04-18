/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:18:52 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/04/18 11:31:51 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int	g_signal_ready;

void	send_signal(char c, int pid)
{
	int	i;
	int	bit;

	i = 7;
	while (i >= 0)
	{
		g_signal_ready = 0;
		bit = (c >> i) & 1;
		if (bit == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		while (g_signal_ready == 0)
			usleep(1);
		i--;
	}
}

void	signal_control(int signal)
{
	if (signal == SIGUSR2)
	{
		g_signal_ready = 1;
	}
	else
		exit(ft_printf("El servidor ha recibido el mensaje.\n"));
}

int	main(int argnum, char **arg)
{
	size_t	i;
	char	*str;

	if (argnum != 3 || !ft_strlen(arg[2]))
		return (ft_printf("Te faltan o te sobran argumentos."));
	signal(SIGUSR1, signal_control);
	signal(SIGUSR2, signal_control);
	i = 0;
	str = arg[2];
	while (ft_strlen(str) >= i)
	{
		send_signal(arg[2][i], ft_atoi(arg[1]));
		i++;
	}
	while (1)
		pause();
}
