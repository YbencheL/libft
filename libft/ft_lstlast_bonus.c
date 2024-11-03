/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:23:52 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/03 17:15:02 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
int main()
{
    t_list *head = NULL;

    ft_lstadd_back(&head, ft_lstnew("hello world"));
    ft_lstadd_back(&head, ft_lstnew("this is"));
    ft_lstadd_back(&head, ft_lstnew("42 school"));

    t_list *last = ft_lstlast(head);
    printf("%s\n", (char *)last->content);

    return 0;
}
*/