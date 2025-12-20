/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:56:41 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:15:19 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	len;
	size_t	i;

	len = count * size;
	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
		((char *)ptr)[i++] = 0;
	return (ptr);
}

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_calloc(0, 0);
// 	printf("%p\n", ptr);
// 	free(ptr);
// 	return (0);
// }
