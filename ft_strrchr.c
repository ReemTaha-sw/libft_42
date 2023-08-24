/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:33:59 by rosman            #+#    #+#             */
/*   Updated: 2023/08/07 15:44:57 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*last;
	size_t		i;

	last = (char *)s;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == (char)c)
			return (last + i);
		i--;
	}
	if (last[i] == (char)c)
		return (last);
	return (NULL);
}
// int main(void)
// {
// 	char arry[] = "reem";
// 	ft_strrchr(arry,'r');
// 	const char *str = "Hello, world!";
// 	char searchChar = 'l';

// 	char *result = ft_strrchr(str, searchChar);
// 	char *resultx = strrchr(str, searchChar);

// 	if (result) {
// 		printf("'%c' found at: %ld\n", searchChar, result - str);
// 	} else {
// 		printf("Character '%c' not found in the string.\n", searchChar);
// 	}
// 	if (resultx) {
// 		printf("'%c' found at: %ld\n", searchChar, resultx - str);
// 	} else {
// 		printf("Character '%c' not found in the string.\n", searchChar);
// 	}
// 	return 0;
// }