/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:04:14 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/02/12 22:29:19 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <sys/types.h>
# include <unistd.h>
# include <signal.h>
# include "libft.h"

# define ERROR_KILL "Client : Kill return bad value\n"
# define ERROR_PID "Client : PID is bad\n"
# define BAD_ARG "Client : Bad number of arguments (./client [PID] [MSG])\n"
# define CLI_SIG_ERR "Server : Signal return SIG_ERR\n"
#endif
