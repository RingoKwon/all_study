/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 04:01:22 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:35:10 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			digit;
	long		long_n;
	bool		is_positive;

	long_n = n;
	is_positive = 1;
	if (long_n < 0)
	{
		long_n *= -1;
		is_positive = 0;
	}
	digit = (long_n % 10) + '0';
	if (long_n < 10)
	{
		if (!is_positive)
			write(fd, "-", 1);
		write(fd, &digit, 1);
		return ;
	}
	ft_putnbr_fd(n / 10, fd);
	write(fd, &digit, 1);
}

// int	main(void)
// {
// 	ft_putnbr_fd(-125, 1);
// 	return (1);
// }
