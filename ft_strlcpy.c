/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:36:49 by rosman            #+#    #+#             */
/*   Updated: 2023/08/02 22:14:41 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t dstsize)

{
	size_t	i;
	size_t	spacs;
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize == 0)
		return (src_len);
	if (dstsize > 0)
		spacs = dstsize - 1;
	else
		spacs = 0;
	i = 0;
	while (i < spacs && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
// int	main(void)
// {
// 	size_t	result;
// 	char src[] = "reem";
// 	char dst[] = "osman taha";

// 	result = ft_strlcpy(dst, src, 0);
// 	printf("function result is = %zu", result);
// 	printf("\ndst become = %s", dst);
// 	return (0);
// }