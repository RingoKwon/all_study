/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:06:30 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:16:41 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	while (len--)
		ptr[len] = s1[len];
	return (ptr);
}

// int	main(void)
// {
// 	char	*s;
// 	char	*d;

// 	s = malloc(29);
// 	d = malloc(34);
// 	s = strcpy(s, "");
// 	d = ft_strdup(NULL);
// 	printf("%s\n", d);
// 	free (s);
// 	free (d);
// 	return (1);
// }
