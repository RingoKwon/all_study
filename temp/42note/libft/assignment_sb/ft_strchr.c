/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 17:54:32 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:16:38 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*r;
// 	char	*r2;
// 	char	c;
// 	c = 'z';
// 	s = malloc(10);
// 	r = malloc(10);
// 	r2 = malloc(10);
// 	s = strcpy(s, "Ringo");
// 	r = strchr(s, c);
// 	printf("%s\n", r);
// 	r2 = ft_strchr(s, c);
// 	printf("%s\n", r2);
// 	return(0);
// }
