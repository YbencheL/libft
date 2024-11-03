/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:12:56 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/03 17:13:27 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void print_lst(void *content)
{

	printf("%s",(char*)content);
}

int main()
{
	t_list *head = NULL;
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("hello world")));
	ft_lstiter(head, print_lst);

	ft_lstclear(&head, free);
}
*/