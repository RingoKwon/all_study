/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 01:03:20 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:15:55 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*to_upper(void *contents)
// {
// 	char	*s;
// 	size_t	i;

// 	s = ft_strdup((char *)contents);
// 	if (!s)
// 		return (NULL);
// 	i = 0;
// 	while (s[i])
// 	{
// 		s[i] += 1;
// 		i++;
// 	}
// 	return (s);
// }
// void	del_content(void *contents)
// {
// 	free(contents);
// }

static t_list	*lstnew_safe(void *content, void *(*f)(void *)
	, void (*del)(void *))
{
	void	*new_content;
	t_list	*new_node;

	new_content = f(content);
	if (!new_content)
		return (NULL);
	new_node = ft_lstnew(new_content);
	if (!new_node)
	{
		del(new_content);
		return (NULL);
	}
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_node = lstnew_safe(lst->content, f, del);
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
// int	main(void)
// {
// 	t_list	*l1;
// 	t_list	*l2;
// 	t_list	*l3;
// 	char	*c1;
// 	char	*c2;

// 	c1 = strdup("Ringo");
// 	c2 = strdup("Bingo");
// 	l1 = ft_lstnew(c1);
// 	l2 = ft_lstnew(c2);
// 	ft_lstadd_back(&l1, l2);
// 	l3 = ft_lstmap(l1, to_upper, del_content);
// 	printf("%s\n", (char *)l3->content);

// 	return (0);
// }
