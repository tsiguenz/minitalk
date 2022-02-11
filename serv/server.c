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

char	*ft_addc(char *str, char c)
{
	char	*ret;
	int		len;

	if (!str)
	{
		ret = ft_calloc(2, sizeof(char));
		if (!ret)
			return (0);
		ret[0] = c;
		return (ret);
	}
	len = ft_strlen(str);
	ret = ft_calloc(len + 2, sizeof(char));
	if (!ret)
		return (0);
	ft_strlcpy(ret, str, len + 1);
	ret[len] = c;
	free(str);
	return (ret);
}

void	ft_handler(int sig)
{
	static int	i;
	static char	*str;
	static char	c;

	if (sig == SIGUSR2)
	{
		c <<= 1;
		c |= 0x01;
	}
	else if (sig == SIGUSR1)
		c <<= 1;
	i++;
	if (i == 8)
	{
		if (c)
			str = ft_addc(str, c);
		else
		{
			ft_printf("%s\n", str);
			free(str);
			str = 0;
		}
		i = 0;
	}
}

int	main(void)
{
	ft_printf("%d\n", getpid());
	if (signal(SIGUSR1, ft_handler) == SIG_ERR
		|| signal(SIGUSR2, ft_handler) == SIG_ERR)
		return (ft_printf(CLI_SIG_ERR));
	while (42)
		pause();
	return (0);
}
