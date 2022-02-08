/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:55:29 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/02/08 18:43:04 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_send_null(int pid)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (kill(pid, SIGUSR1) == -1)
			return (ft_printf(ERROR_KILL));
		i++;
		usleep(3);
	}
	return (0);
}

int	ft_send_sig(int pid, char *str)
{
	int	bitshift;

	if (!str)
		return (ft_printf(ERROR_NULL_MESSAGE));
	while (*str)
	{
		bitshift = 0;
		while (bitshift < 8)
		{
			if (128 & *str << bitshift)
			{
				if (kill(pid, SIGUSR2) == -1)
					return (ft_printf(ERROR_KILL));
			}
			else
				if (kill(pid, SIGUSR1) == -1)
					return (ft_printf(ERROR_KILL));
			bitshift++;
			usleep(3);
		}
		str++;
	}
	ft_send_null(pid);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_printf("client : Invalid number of parameters ");
		ft_printf("(Usage : %s [PID] [MESSAGE])\n", argv[0]);
		return (ft_printf(BAD_ARGUMENT));
	}
	if (ft_send_sig(ft_atoi(argv[1]), argv[2]))
		return (1);
	return (0);
}
