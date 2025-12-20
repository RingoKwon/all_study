/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 15:32:03 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:16:58 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	test_func(unsigned int i, char s)
// {
// 	return (s + i % 2);
// }
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*out;
// 	out = malloc(10);
// 	str = ft_strdup("abcdefg");
// 	out = ft_strmapi(str, test_func);
// 	printf("%s\n", out);
// 	return(0);
// }
