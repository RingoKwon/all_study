/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 15:55:07 by hyuckwon          #+#    #+#             */
/*   Updated: 2026/08/29 16:02:45 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	pid_t	p_id;
	pid_t	f_id;

	p_id = getpid();
	printf("pid: %i\n", p_id);
	f_id = fork();
	p_id = getpid();
	printf("pid: %i\n", p_id);
	printf("fid: %i\n", f_id);
}

