/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 23:24:28 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:15:39 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int main(void)
// {
// 	t_list	*l1;
// 	t_list	*l2;
// 	char	*c1;
// 	char	*c2;

// 	c1 = strdup("aaa");
// 	c2 = strdup("bbb");
// 	l1 = ft_lstnew(c1);
// 	l2 = ft_lstnew(c2);
// 	ft_lstadd_front(&l2, l1);
// 	ft_lstadd_back(&l1, l2);
// 	printf("%s\n", (char *)l1->content);
// 	printf("%s\n", (char *)l1->next->content);
// 	printf("%s\n", (char *)l1->next->next->content);
// 	return (1);
// }
