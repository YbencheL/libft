/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:49:50 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/07 13:43:29 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int main()
{
	int x[] = {1,2,3,4};
	ft_memset(x+1,5,2);
	ft_memset(x+1,57,1);
	printf("%d",x[1]);
}
*/