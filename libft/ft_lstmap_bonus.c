/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:04:21 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/07 11:55:39 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;
	void	*content;

	new_lst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		temp = ft_lstnew(content);
		if (!temp)
		{
			if (content)
				del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, temp);
		lst = lst->next;
	}
	return (new_lst);
}

/*
void *ft_duplicate(void *lst)
{
	return ft_strdup((char*)lst);
}

int main()
{
    t_list *head = ft_lstnew(ft_strdup("hello"));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("world")));
    ft_lstadd_back(&head, ft_lstnew(ft_strdup("42")));
    
    t_list *mapped_list = ft_lstmap(head, ft_duplicate, free);
    
    t_list *current = mapped_list;
    while (current)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
}
*/
