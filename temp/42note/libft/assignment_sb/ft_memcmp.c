/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 18:35:39 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:16:13 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (n--)
	{
		if (*c1 != *c2)
			return (*c1 - *c2);
		c1++;
		c2++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	int		out;
// 	size_t	size;

// 	size = 40;
// 	s1 = malloc(10);
// 	s2 = malloc(10);
// 	s1 = strcpy(s1, "a\0ed");
// 	s2 = strcpy(s2, "abcd");
// 	out = memcmp(s1, s2, size);
// 	printf("str: %d\n", out);
// 	out = ft_memcmp(s1, s2, size);
// 	printf("ft : %d\n", out);
// 	return (0);
// }
