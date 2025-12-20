/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:34:12 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:17:04 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tmp;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			tmp = (char *)&(haystack[i]);
			j = 0;
			while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
				j++;
			if (needle[j] == '\0')
				return (tmp);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*sl;
// 	char	*ss;
// 	char	*out;
// 	size_t	i;

// 	i = -1;
// 	sl = malloc(100);
// 	ss = malloc(10);
// 	sl = strcpy(sl, "abcdefg");
// 	ss = strcpy(ss, "bc");
// 	out = strnstr(sl, ss, i);
// 	printf("str: %s\n", out);
// 	out = ft_strnstr(sl, ss, i);
// 	printf("ft : %s\n", out);
// 	return (0);
// }
