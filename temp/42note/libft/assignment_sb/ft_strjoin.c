/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:28:03 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:16:46 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*res;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = malloc(s1_len + s2_len + 1);
	if (!ptr)
		return (NULL);
	res = ptr;
	while (s1_len--)
		*(ptr++) = *(s1++);
	while (s2_len--)
		*(ptr++) = *(s2++);
	*ptr = '\0';
	return (res);
}

// int main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*out;

// 	s1 = malloc(10);
// 	s2 = malloc(10);
// 	free(s1);
// 	s1 = NULL;
// 	// s1 = strcpy(s1, "aa");
// 	s2 = strcpy(s2, "bbb");

// 	out = ft_strjoin(s1, s2);
// 	printf("%s\n", out);
// 	// free(s1);
// 	free(s2);
// 	return (0);
// }
