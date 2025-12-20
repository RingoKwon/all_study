/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuckwon <hyuckwon@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:10:15 by ringowkon         #+#    #+#             */
/*   Updated: 2025/12/19 22:15:42 by hyuckwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list *fst;
// 	t_list *scd;
// 	char	*c;
// 	char	*c2;

// 	c = "av";
// 	c2 = "bb";
// 	fst = ft_lstnew(c);
// 	scd = ft_lstnew(c2);
// 	ft_lstadd_front(&fst, scd);

// 	printf("%s\n", (char *)fst->content);
// 	printf("%s\n", (char *)fst->next->content);
// 	return (1);
// }
