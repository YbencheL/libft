/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:43:58 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/07 12:30:50 by ybenchel         ###   ########.fr       */
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

/*
void print_list(t_list *lst)
{
	while(lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

int main()
{
	t_list *head = ft_lstnew("hell");
	ft_lstadd_front(&head, ft_lstnew("its me"));
	ft_lstadd_front(&head, ft_lstnew("world"));
	ft_lstadd_front(&head, ft_lstnew("hello"));

	print_list(head);
}
*/
