/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:06:40 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:15:46 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del_content(void *contents)
// {
// 	free(contents);
// }

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curr;
	t_list	*prev;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr)
	{
		del(curr->content);
		prev = curr;
		curr = curr->next;
		free(prev);
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list	*l1;
// 	t_list	*l2;
// 	char	*c1;
// 	char	*c2;

// 	c1 = strdup("Ringo");
// 	c2 = strdup("Bingo");
// 	l1 = ft_lstnew(c1);
// 	l2 = ft_lstnew(c2);
// 	ft_lstadd_back(&l1, l2);
// 	printf("%s\n", (char *)l1->content);
// 	printf("%s\n", (char *)l1->next->content);
// 	printf("%s\n", (char *)l1->next->next);
// 	ft_lstclear(&l1, del_content);
// 	printf("%s\n", (char *)l1);

// 	return (0);
// }
