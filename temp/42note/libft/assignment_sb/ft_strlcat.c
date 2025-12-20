/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 20:26:39 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:16:49 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	size_t	src_s;

	len = 0;
	src_s = ft_strlen(src);
	if (dstsize == 0)
		return (src_s);
	while (dst[len] && len < dstsize)
		len++;
	if (dstsize <= len)
		return (len + src_s);
	i = 0;
	while (src[i] && (dstsize > len + i + 1))
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (src_s + len);
}

// int	main(void)
// {
// 	char*	src;
// 	char*	dst;
// 	size_t	i;
// 	int		dstsize;

// 	src = malloc(10);
// 	dst = malloc(10);
// 	dstsize = 5;

// 	src = strcpy(src, "ABCD");
// 	dst = strcpy(dst, "ab");
// 	i = strlcat(dst, src, dstsize);
// 	printf("--------------------\n");
// 	printf("%s\n", dst);
// 	printf("%zu\n", i);
// 	// dst,
// 	src = strcpy(src, "ABCD");
// 	dst = strcpy(dst, "ab");
// 	i = ft_strlcat(dst, src, dstsize);
// 	printf("--------------------\n");
// 	printf("%s\n", dst);
// 	printf("%zu\n", i);

// 	return (0);
// }
