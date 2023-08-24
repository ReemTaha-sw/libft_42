/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:57:01 by rosman            #+#    #+#             */
/*   Updated: 2023/08/02 14:46:49 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(void)
// {
// 	int	number;
// 	int	zero;
// 	int	alpha;
// 	int	alpha_c;
// 	double	y;
// 	char ch;

// 	number = '5';
// 	zero = 48;
// 	alpha = 'a';
// 	alpha_c = 'A';
// 	y = 4244.546;
// 	ch = '$';
// 	printf("function number result is = %i", ft_isascii(number));
// 	printf("\nfunction zero result is = %i", ft_isascii(zero));
// 	printf("\nfunction alpha result is = %i", ft_isascii(alpha));
// 	printf("\nfunction alpha_c result is = %i", ft_isascii(alpha_c));
// 	printf("\nfunction double = (   %f  ) result is = %i", y, ft_isascii(y));
// 	printf("\nfunction $ result is = %i", ft_isascii(ch));
// 	return (0);
// }
