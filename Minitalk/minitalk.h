/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasar <yyasar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:23:14 by yyasar            #+#    #+#             */
/*   Updated: 2023/05/29 12:44:53 by yyasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa(int a);
int		ft_atoi(const char *str);
int		len(int a);
void	getbit(int pid, char *str);
void	sig_usr(int sig);

#endif
