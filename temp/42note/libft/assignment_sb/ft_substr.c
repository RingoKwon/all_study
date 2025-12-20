/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 14:18:29 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:17:12 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
		s_len = 0;
	else
		s_len = s_len - start;
	if (len > s_len)
		len = s_len;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char	*out;

// 	out = malloc(10);
// 	out = ft_substr("abcde", 5, 40);
// 	printf("%s\n", out);
// 	return (0);
// }
