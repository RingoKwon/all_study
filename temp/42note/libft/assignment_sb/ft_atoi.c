/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 12:55:45 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:14:55 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	res;
	int			sign;
	int			i;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

// int	main(void)
// {
// 	printf("Basic: %d vs %d\n", atoi("42"), ft_atoi("42"));
// 	printf("Neg: %d vs %d\n", atoi("-42"), ft_atoi("-42"));
// 	printf("Space: %d vs %d\n", atoi("   42"), ft_atoi("   42"));
// 	printf("++5: %d vs %d\n", atoi("++5"), ft_atoi("++5"));
// 	printf("--5: %d vs %d\n", atoi("--5"), ft_atoi("--5"));
// 	printf("+-5: %d vs %d\n", atoi("+-5"), ft_atoi("+-5"));
// 	printf("MAX: %d vs %d\n", atoi("2147483647"), ft_atoi("2147483647"));
// 	printf("Overflow: %d vs %d\n", atoi(""), ft_atoi(""));
// 	return (0);
// }
