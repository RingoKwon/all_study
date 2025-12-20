/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:30:44 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:46:19 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*out;
// 	char	c;

// 	s1 = malloc(10);
// 	s1 = strcpy(s1, "abcd");
// 	c = 'b';
// 	out = memchr(s1, c, 10);
// 	printf("std: %s\n", out);

// 	s1 = strcpy(s1, "abcd");
// 	out = ft_memchr(s1, c, 10);
// 	printf("ft : %s\n", out);
// 	free(s1);
// 	return (0);
// }
