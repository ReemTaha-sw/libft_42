/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:54:57 by rosman            #+#    #+#             */
/*   Updated: 2023/08/24 21:26:00 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	new_len;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	new_len = ft_strlen(s + start);
	if (new_len < len)
		len = new_len;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char				*sub_s;
// 	unsigned int		s_len;
// 	size_t				new_len;
// 	size_t				i;

// 	i = 0;
// 	if (!s)
// 		return (NULL);
// 	s_len = ft_strlen(s);
// 	if ((size_t)start >= s_len)
// 		return (ft_strdup(""));
// 	if (len > s_len)
// 		new_len = s_len + 1;
// 	else
// 		new_len = len + 1;
// 	sub_s = (char *)malloc(new_len * sizeof(char));
// 	if (!sub_s)
// 		return (NULL);
// 	while (s[start + i] != '\0' && i < len)
// 	{
// 		sub_s[i] = s[start + i];
// 		i++;
// 	}
// 	sub_s[i] = '\0';
// 	return (sub_s);
// }
