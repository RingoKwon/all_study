/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:15:35 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:16:52 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while ((i < dstsize - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	*dst;
// 	char	*src;
// 	int		i;

// 	dst = malloc(10);
// 	src = malloc(10);
// 	src = strcpy(src, "ringo");
// 	i = ft_strlcpy(dst, src + 1, 2);
// 	printf("%s\n", dst);
// 	return (0);
// }
