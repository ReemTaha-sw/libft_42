/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:33:40 by rosman            #+#    #+#             */
/*   Updated: 2023/08/07 14:51:14 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s2[i] != '\0')
		i++;
	if (*s2 == '\0')
		return ((char *)s1);
	if (len == 0)
		return (NULL);
	while (*s1 != '\0' && *s2 != '\0' && len >= i)
	{
		j = 0;
		while (s1[j] == s2[j] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}

// int main(void)
// {

// 	char large[] = "hellow world";
// 	char shortt[] = "w w";
//     printf("org: %s\n", strnstr(large, shortt, 0));
//     printf("my: %s\n", ft_strnstr(large, shortt, 0));
//     printf("---org: %s\n", strnstr("\0", "\0", 30));
//     printf("---my: %s\n", ft_strnstr("\0", "\0", 30));
// }