/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:47:07 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:16:22 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*pointer;

	pointer = (unsigned char *) b;
	while (n--)
	{
		*(pointer++) = (unsigned char) c;
	}
	return (b);
}

// int	main(void)
// {
// 	char	*dest;
// 	dest = malloc(6);

// 	dest = ft_memset(dest, 300, 4);
// //test
// }
