/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 16:47:06 by rosman            #+#    #+#             */
/*   Updated: 2023/08/06 17:11:15 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*cast_s1;
	const unsigned char	*cast_s2;
	size_t				counter;

	cast_s1 = (const unsigned char *)s1;
	cast_s2 = (const unsigned char *)s2;
	counter = 0;
	while (counter < n)
	{
		if (cast_s1[counter] != cast_s2[counter])
			return (cast_s1[counter] - cast_s2[counter]);
		if (cast_s1[counter] == '\0' || cast_s2[counter] == '\0')
			return (0);
		counter++;
	}
	return (0);
}
