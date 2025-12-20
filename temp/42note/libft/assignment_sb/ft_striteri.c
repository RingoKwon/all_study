/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 02:15:39 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:16:44 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//
// void	test_func(unsigned int i, char *s)
// {
// 	s[i] = s[i] + 1;
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
//
//
// int	main(void)
// {
// 	char	*ptr;
//
// 	ptr = strdup("abcde;);
// 	ft_striteri(ptr, test_func);
// 	printf("%s\n", ptr);
// 	return (1);
// }
