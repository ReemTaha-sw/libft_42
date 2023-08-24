/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:59:41 by rosman            #+#    #+#             */
/*   Updated: 2023/08/07 21:55:11 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	dlen;

	i = 0;
	dlen = 0;
	if (destsize == 0)
		return (ft_strlen(src));
	while (dest[dlen] != '\0' && dlen < destsize)
		dlen++;
	while (src[i] != '\0' && dlen + i + 1 < destsize)
	{
		dest[dlen + i] = src[i];
		i++;
	}
	if (dlen < destsize)
		dest[dlen + i] = '\0';
	while (src[i] != '\0')
		i++;
	return (dlen + i);
}
