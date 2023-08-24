/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:05:26 by rosman            #+#    #+#             */
/*   Updated: 2023/08/04 14:55:59 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*byte_s;
	size_t				counter;

	byte_s = (const unsigned char *)s;
	counter = 0;
	while (counter < n)
	{
		if (byte_s[counter] == (unsigned char)c)
			return ((void *)(byte_s + counter));
		counter++;
	}
	return (NULL);
}
