/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execve.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 16:33:52 by hyuckwon          #+#    #+#             */
/*   Updated: 2026/08/29 17:08:57 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	*args[] = {"banana", "-a", NULL};

	printf("BEFORE execve\n");
	execve("/bin/lsd", args, NULL);
	perror("execve");
	printf("AFTER execve\n");
	return (0);
}
