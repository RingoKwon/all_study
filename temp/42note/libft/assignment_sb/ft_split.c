/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:22:25 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:16:36 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_word(char const *s, char c)
{
	size_t	cnt;
	size_t	i;

	cnt = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		while (s[i] && s[i] != c)
			i++;
		cnt++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (cnt);
}

static	void	free_word(char **ptr, size_t cnt)
{
	while (cnt--)
		free(ptr[cnt]);
}

static	bool	assign_word(char **ptr, char const *start
	, size_t len, size_t cnt)
{
	ptr[cnt] = malloc(len);
	if (!ptr[cnt])
	{
		free_word(ptr, cnt);
		return (false);
	}
	ft_strlcpy(ptr[cnt], start, len);
	return (true);
}

static	bool	backbone(char **ptr, char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	cnt;
	bool	is_valid;

	is_valid = true;
	cnt = 0;
	len = 0;
	i = 0;
	while (s[i] && is_valid)
	{
		len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i + len] != c && s[i + len])
			len++;
		is_valid = assign_word(ptr, s + i, len + 1, cnt++);
		i = i + len;
		while (s[i] && s[i] == c)
			i++;
	}
	return (is_valid);
}

char	**ft_split(char const *s, char c)
{
	size_t	cnt;
	char	**ptr;

	if (!s)
		return (NULL);
	cnt = count_word(s, c);
	ptr = malloc(sizeof(char *) * (cnt + 1));
	if (!ptr)
		return (NULL);
	ptr[cnt] = NULL;
	if (cnt > 0 && !backbone(ptr, s, c))
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

// int	main(void)
// {
// 	char	*str;
// 	char	**ptr;
// 	char	delimeter;
// 	int		i;

// 	delimeter = ',';
// 	str = malloc(20);
// 	str = strcpy(str, "slllf,,dd aa,dd,,d_,,,");
// 	ptr = ft_split(str, delimeter);
// 	printf("%s\n", ptr[2]);
// 	return (0);
// }
/*
str == "" || ",," << NULL;
*/
