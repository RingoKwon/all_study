/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:26:49 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:17:09 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = 0;
	while (s1[len])
		len++;
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1, len + 1);
	return (ptr);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*set;
// 	char	*out;

// 	s1 = NULL;
// 	s1 = malloc(20);
// 	set = malloc(20);
// 	s1 = strcpy(s1, "asdfgf");
// 	set = strcpy(set, "gfgfag");

// 	out	= ft_strtrim(s1, set);
// 	printf("%s\n", out);
//     // free(s1);
//     free(set);
// 	return (0);
// }
