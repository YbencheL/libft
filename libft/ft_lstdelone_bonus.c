/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:53:41 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/05 21:32:43 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
int main()
{
	t_list *head = NULL;
	t_list *node_to_delete;
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("hello mam")));

	node_to_delete = head;
	ft_lstdelone(node_to_delete, free);

	head = NULL;

	if(head == NULL)
	{
		printf("freeeee\n");
	}
}
*/