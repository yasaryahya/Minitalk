/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasar <yyasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:22:43 by yyasar            #+#    #+#             */
/*   Updated: 2023/05/29 12:23:17 by yyasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_usr(int sig)
{
	static char	str;
	static int	i = 0;

	if (sig == SIGUSR1)
		str = str | 1;
	i++;
	if (i == 8)
	{
		write(1, &str, 1);
		i = 0;
		str = 0;
	}
	else
		str = str << 1;
}

int	main(void)
{
	char	*str;

	str = ft_itoa(getpid());
	write(1, str, len(getpid()));
	free(str);
	write(1, "\nSignal waiting....", 20);
	write(1, "\n", 1);
	while (1)
	{
		signal(SIGUSR1, sig_usr);
		signal(SIGUSR2, sig_usr);
		usleep(150);
	}
	return (0);
}
