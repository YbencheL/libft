/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenchel <ybenchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:07:45 by ybenchel          #+#    #+#             */
/*   Updated: 2024/11/06 15:43:47 by ybenchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_look_for(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_look_for(s1[start], set))
		start++;
	while (end > start && ft_look_for(s1[end - 1], set))
		end--;
	len = end - start;
	trimmed_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, &s1[start], len + 1);
	trimmed_str[len] = '\0';
	return (trimmed_str);
}

/*
int main()
{
	char str[] = "qrqrrqrqrqrqrrqrqrqhello wolrd its me barak 
	hussien obamaqrqrqrqrqr";
	char *freeme = ft_strtrim(str, "qr");
	printf("%s", freeme);
	if(freeme)
		free(freeme);
}
*/