/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 19:47:31 by hyuckwon          #+#    #+#             */
/*   Updated: 2026/08/29 19:54:43 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

int main(void)
{
    char *args[] = {"/bin/ls", NULL};
    pid_t pid = fork();

    if (pid == 0)
    {
        // 자식: 몸을 ls로 갈아치움
        execve("/bin/lsd", args, NULL);
        perror("execve");
        exit(127); // execve가 "실패"했을 때만 여기 도달
    }

    // 부모: 자식이 끝날 때까지 대기
    int status;
    waitpid(pid, &status, 0);

    if (WIFEXITED(status))
        printf("shell continues, exit code = %d\n", WEXITSTATUS(status));
    else if (WIFSIGNALED(status))
        printf("child killed by signal %d\n", WTERMSIG(status));

    return 0;
}