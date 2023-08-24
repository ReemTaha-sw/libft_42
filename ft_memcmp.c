/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:34:39 by rosman            #+#    #+#             */
/*   Updated: 2023/08/06 16:20:19 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, int n)
{
	const unsigned char	*f_p1;
	const unsigned char	*f_p2;
	int					counter;

	f_p1 = (unsigned char *)ptr1;
	f_p2 = (unsigned char *)ptr2;
	counter = 0;
	while (counter < n)
	{
		if (f_p1[counter] != f_p2[counter])
			return (f_p1[counter] - f_p2[counter]);
		counter++;
	}
	return (0);
}
