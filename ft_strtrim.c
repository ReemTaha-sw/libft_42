/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:57:41 by rosman            #+#    #+#             */
/*   Updated: 2023/08/24 15:32:16 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_here(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	size_t	len;
	char	*new;

	if (!s1 || !set)
		return (0);
	begin = 0;
	end = ft_strlen(s1) - 1;
	while (s1[begin] && is_here(s1[begin], (char *)set))
		begin++;
	if (s1[begin] == '\0')
		return (ft_strdup(""));
	while (s1[end] && is_here(s1[end], (char *)set))
		end--;
	len = end - begin + 2;
	new = (char *)malloc(sizeof(char) * len);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1 + begin, len);
	return (new);
}
