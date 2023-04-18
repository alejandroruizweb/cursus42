/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alruiz-c <alruiz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:07:21 by alruiz-c          #+#    #+#             */
/*   Updated: 2023/04/13 15:22:37 by alruiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	signal_control(int signal, siginfo_t *info, void *param)
{
	static char	c = 0;
	static int	bit = 7;
	static int	pid = 0;

	(void)param;
	if (signal == SIGUSR2)
		c = c | (1 << bit);
	if (pid == 0)
		pid = info->si_pid;
	kill(pid, SIGUSR2);
	bit--;
	if (bit < 0)
	{
		bit = 7;
		if (c == '\0')
		{
			c = 0;
			kill(pid, SIGUSR1);
			ft_printf("\n");
			pid = 0;
			return ;
		}
		ft_printf("%c", c);
		c = 0;
	}
}

int	main(void)
{
	int					pid;
	struct sigaction	data;

	pid = getpid();
	ft_printf("Ejecuta el cliente en otra ventana con el comando ./client");
	ft_printf(" seguido del PID: %d y el mensaje entre comillas", pid);
	ft_printf(" que quieras que muestre el servidor\n");
	ft_printf("Ejemplo: ./client %d \"hola\"\n", pid);
	data.sa_flags = SA_SIGINFO;
	data.sa_sigaction = signal_control;
	sigaction(SIGUSR1, &data, NULL);
	sigaction(SIGUSR2, &data, NULL);
	while (1)
		pause();
}
