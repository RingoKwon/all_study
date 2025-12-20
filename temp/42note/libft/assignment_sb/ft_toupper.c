/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 15:48:42 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:17:17 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c + (- 'a' + 'A');
	return (c);
}

// int	main(void)
// {
// 	int c = '.';

// 	printf("std: %c\n", toupper(c));
// 	printf("ft : %c\n", ft_toupper(c));
// 	return (0);
// }
