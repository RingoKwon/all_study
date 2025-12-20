/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 19:59:33 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:17:02 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	int		n;
// 	int		out;

// 	s1 = malloc(10);
// 	s2 = malloc(10);
// 	n = 3;
// 	s1 = strcpy(s1, "abcdef");
// 	s2 = strcpy(s2, "");
// 	printf("----------standard-------\n");
// 	out = strncmp(s1, s2, n);
// 	printf("std: %d\n", out);
// 	printf("----------standard-------\n");
// 	// out = ft_strncmp(s1, s2, n);
// 	printf("ft : %d\n", out);
// 	return (0);
// }
