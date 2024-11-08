/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:21:42 by ybenchel          #+#    #+#           */
/*   Updated: 2024/10/25 16:42:46 by ybenchel         ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	if (count == 0 || size == 0)
		total_size = 1;
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

// int main()
// {
//     char *ptr = ft_calloc(0, 0);
//     printf("%d\n", ptr[0]);
// }