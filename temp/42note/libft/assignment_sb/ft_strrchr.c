/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 19:35:49 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:17:07 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	while (i > 0)
	{
		i--;
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
	}
	return (NULL);
}
