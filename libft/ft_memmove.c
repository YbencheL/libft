/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:01:59 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/07 13:45:28 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}

// int main()
// {
// 	char dst[] = "abcdef";

// 	printf("%s",ft_memmove(dst + 2,dst,4));

// }
/*
int main()
{
	int dst[] = {1,2,3};
	int rsc[] = {4,5,6};
	ft_memmove(dst,rsc,sizeof(int) * 3);
	for(int i = 0; i < 3; i++)
	{
		printf("%d ", dst[i]);
	}
}
*/