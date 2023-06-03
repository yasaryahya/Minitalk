/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasar <yyasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:22:48 by yyasar            #+#    #+#             */
/*   Updated: 2023/05/29 12:51:10 by yyasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	getbit(int pid, char *str)
{
	int		i;
	int		j;
	char	c;

	j = 0;
	while (str[j])
	{
		i = 7;
		c = str[j];
		j++;
		while (i >= 0)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(150);
			i--;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		getbit(ft_atoi(argv[1]), argv[2]);
		getbit(ft_atoi(argv[1]), "\n");
	}
	else
	{
		write(1, "Error\n", 7);
		write(1, "Try: ./client <PID> <MESSAGE>\n", 31);
	}
	return (0);
}
