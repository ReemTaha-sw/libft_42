/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 20:22:35 by rosman            #+#    #+#             */
/*   Updated: 2023/08/04 21:23:02 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	size_t		counter;
	const char	*source;

	counter = 0;
	dest = (char *)dst;
	source = (const char *)src;
	if (dst || src)
	{
		while (counter < n)
		{
			dest[counter] = source[counter];
			counter++;
		}
	}
	return (dst);
}
