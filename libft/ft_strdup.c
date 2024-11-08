/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:47:07 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/04 10:58:12 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		i;
	size_t	len;

	len = ft_strlen(str);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	ft_memcpy(dup, str, len);
	dup[len] = '\0';
	return (dup);
}

/*
int main()
{
	char str[] = "hello world";
	char *duplicate;
	duplicate = ft_strdup(str);
	printf("%s", duplicate);
	if(duplicate)
		free(duplicate);
}
*/