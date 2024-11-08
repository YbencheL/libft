/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:16:32 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/05 22:14:09 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*
int main()
{
	    t_list *head = NULL;

    ft_lstadd_back(&head, ft_lstnew("hello world"));
    ft_lstadd_back(&head, ft_lstnew("this is"));
    ft_lstadd_back(&head, ft_lstnew("42 school"));

    printf("%d\n", ft_lstsize(head));

    return 0;
}
 */