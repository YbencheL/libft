/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:03:19 by ybenchel          #+#    #+#             */
/*   Updated: 2024/10/28 10:46:02 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_cpy;
	const unsigned char	*src_cpy;
	size_t				i;

	if (!dst && !src)
		return (NULL);
	dst_cpy = (unsigned char *)dst;
	src_cpy = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_cpy[i] = src_cpy[i];
		i++;
	}
	return (dst);
}
