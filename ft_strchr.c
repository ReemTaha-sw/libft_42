/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:40:57 by rosman            #+#    #+#             */
/*   Updated: 2023/08/08 16:42:23 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (NULL);
}

	// int	counter;

	// counter = 0;
	// while (s[counter] != '\0')
	// {
	// 	if (s[counter] == (char)c)
	// 		return ((char *)&s[counter]);
	// 	counter++;
	// }
	// if (c == '\0')
	// 	return ((char *)&s[counter]);
	// return (NULL);
