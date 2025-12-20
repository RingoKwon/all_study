/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 15:55:37 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:17:14 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + (- 'A' + 'a');
	return (c);
}

// int	main(void)
// {
// 	int c = 'F';

// 	printf("std: %c\n", tolower(c));
// 	printf("ft : %c\n", ft_tolower(c));
// }
