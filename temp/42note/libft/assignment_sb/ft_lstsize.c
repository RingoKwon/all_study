/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 21:55:33 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:16:08 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

// int main(void)
// {
// 	t_list *l1;
// 	t_list *l2;
// 	char	*c1;
// 	char	*c2;

// 	c1 = "aaaa";
// 	c2 = "bbbbb";
// 	l1 = ft_lstnew(c1);
// 	l2 = ft_lstnew(c2);

// 	ft_lstadd_front(&l1, l2);
// 	printf("%s\n", (char *)l1->content);
// 	printf("%s\n", (char *)l1->next->content);
// 	printf("%s\n", (char *)l1->next->next);
// 	printf("%d\n", ft_lstsize(l1));

// 	return (1);
// }
