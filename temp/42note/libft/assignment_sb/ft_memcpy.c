/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:34:16 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:16:16 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;

	if (src == dst || n == 0)
		return (dst);
	ptr = dst;
	while (n--)
	{
		*((unsigned char *)dst++) = *((unsigned char *)src++);
	}
	return (ptr);
}
