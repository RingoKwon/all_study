/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 13:53:59 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:34:45 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	fill_base(char *ptr, bool is_positive, size_t *idx,
	int digit)
{
	if (is_positive)
	{
		ptr[0] = digit + '0';
		*idx = 1;
	}
	else
	{
		ptr[0] = '-';
		ptr[1] = digit + '0';
		*idx = 2;
	}
}

static	char	*itoa_rec(long long n, bool is_positive,
	size_t len, size_t *idx)
{
	char	*ptr;
	int		digit;

	digit = n % 10;
	if (n < 10)
	{
		ptr = malloc(sizeof(char) * (len + 2));
		if (!ptr)
			return (NULL);
		fill_base(ptr, is_positive, idx, digit);
		ptr[len + 1] = 0;
		return (ptr);
	}
	ptr = itoa_rec(n / 10, is_positive, len + 1, idx);
	if (!ptr)
		return (NULL);
	ptr[(*idx)++] = digit + '0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	bool		is_positive;
	size_t		len;
	size_t		*idx;
	size_t		index;
	long		long_n;

	long_n = n;
	idx = &index;
	if (long_n < 0)
	{
		is_positive = 0;
		long_n = -long_n;
		len = 1;
	}
	else
	{
		is_positive = 1;
		len = 0;
	}
	return (itoa_rec(long_n, is_positive, len, idx));
}
// int	main(void)
// {
// 	char	*str;
// 	str = ft_itoa(-12345);
// 	// str = itoa_rec(12, 0, 1);
// 	printf("%s\n", str);
// 	// printf("%d\n", '.');
// 	return (1);
// }
