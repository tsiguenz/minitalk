/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:26:37 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/02/08 17:59:07 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handler(int sig)
{
	if (sig == SIGUSR2)
		ft_printf("1");
	if (sig == SIGUSR1)
		ft_printf("0");
}

int	main(void)
{
	ft_printf("%d\n", getpid());
	if (signal(SIGUSR1, ft_handler) == SIG_ERR
		|| signal(SIGUSR2, ft_handler) == SIG_ERR)
		return (0);
	while (42)
		pause();
	return (0);
}
