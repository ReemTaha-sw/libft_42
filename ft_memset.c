/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:24:36 by rosman            #+#    #+#             */
/*   Updated: 2023/08/04 16:34:20 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			count;
	unsigned char	*byte_b;

	byte_b = (unsigned char *)b;
	count = 0;
	while (count < len)
	{
		byte_b[count] = c;
		count++;
	}
	return (b);
}

// int main ()
// {
// 	char k[] = "hello";
// 	char kx[] = "hello";
// 	char t;
// 	t = '3';
// 	int j;
// 	j = 'm';

// 	ft_memset(k, t, 6);
// 	memset(kx, t, 6);
// 	printf("\nmy ft_memset function: %s\n \n", k);
// 	printf("real function result : %s", kx);
// }
