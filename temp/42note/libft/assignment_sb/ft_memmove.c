/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:01:46 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:16:19 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_unit;
	unsigned char	*src_unit;

	if (len == 0)
		return (dst);
	if (!dst && !src)
		return (NULL);
	dst_unit = (unsigned char *)dst;
	src_unit = (unsigned char *)src;
	if (src_unit < dst_unit)
	{
		dst_unit += len;
		src_unit += len;
		while (len--)
			*(--dst_unit) = *(--src_unit);
	}
	else
	{
		while (len--)
			*dst_unit++ = *src_unit++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	*dst;
// 	char	*src;
// 	char	*out;

// 	dst = malloc(10);
// 	src = malloc(10);
// 	out = malloc(10);

// 	strcpy(src, "ringo");
// 	// strcpy(dst, "abcde");
//     out = ft_memmove(dst + 3, dst, 2);
// 	printf("--------ft_memmove--------\n");
// 	printf("%s\n", dst);
// 	printf("%s\n", out);
// 	printf("--------memmove--------\n");
// 	strcpy(src, "ringo");
// 	// strcpy(dst, "abcde");
//     out = memmove(dst + 3, dst, 2);
// 	printf("%s\n", dst);
// 	printf("%s\n", out);
// 	free(dst);
// 	free(src);
// 	return (0);
// }
