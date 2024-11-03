/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:11:09 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/03 16:41:09 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

/*
int main()
{
    t_list *head = NULL;

    ft_lstadd_back(&head, ft_lstnew(ft_strdup("mr hanckey")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("the chrismas")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("poo")));

    ft_lstclear(&head, free);

    if (head == NULL)
    {
        printf("nothing to see here");
    }
}
*/