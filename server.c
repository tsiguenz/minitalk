/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 20:26:37 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/02/02 20:49:39 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_sigusr1(int sig)
{
	(void) sig;
	ft_printf("%s\n", "ft_sigusr1");
}

void	ft_sigusr2(int sig)
{
	(void) sig;
	ft_printf("%s\n", "ft_sigusr2");
}

int	main(void)
{
	ft_printf("%d\n", getpid());
	if (signal(SIGUSR1, ft_sigusr1) == SIG_ERR
		|| signal(SIGUSR2, ft_sigusr2) == SIG_ERR)
		return (0);
	while (42)
		;
	return (0);
}
