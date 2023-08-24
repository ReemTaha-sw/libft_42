/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:15:49 by rosman            #+#    #+#             */
/*   Updated: 2023/08/02 14:46:35 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(void)
// {
// 	int	nul;
// 	int	dc1;
// 	int	alpha;
// 	int	alpha_c;
// 	int	ch;

// 	nul = 0;
// 	dc1 = 17;
// 	alpha = 'a';
// 	alpha_c = 'A';
// 	ch = '\n';
// 	printf("function nul result is = %i", ft_isprint(nul));
// 	printf("\nfunction dc1 result is = %i", ft_isprint(dc1));
// 	printf("\nfunction alpha result is = %i", ft_isprint(alpha));
// 	printf("\nfunction alpha_c result is = %i", ft_isprint(alpha_c));
// 	printf("\nfunction newline result is = %i", ft_isprint(ch));
// 	return (0);
// }
