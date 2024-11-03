/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:31:40 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/03 17:09:26 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}

/*
void print_list(t_list *lst)
{
	while(lst)
	{
		printf("%s\n", (void*)lst->content);
		lst = lst->next;
	}
}

int main()
{
    t_list *head = NULL;

    ft_lstadd_back(&head, ft_lstnew("hello world"));
    ft_lstadd_back(&head, ft_lstnew("this is"));
    ft_lstadd_back(&head, ft_lstnew("42 school"));

    print_list(head);

    return 0;
}
*/