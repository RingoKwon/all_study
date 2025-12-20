/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 10:25:42 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:15:25 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int a;

// 	a = ft_isalpha('a');
// 	printf("a: %d\n", a);
// 	a = ft_isalpha(' ');
// 	printf(" : %d\n", a);
// 	a = ft_isalpha('2');
// 	printf("2: %d\n", a);
// }