/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:37:31 by rosman            #+#    #+#             */
/*   Updated: 2023/08/02 15:27:57 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (
		(c >= 'a' && c <= 'z') || 
		(c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
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
// 	printf("function number result is = %i", ft_isalnum(number));
// 	printf("\nfunction zero result is = %i", ft_isalnum(zero));
// 	printf("\nfunction alpha result is = %i", ft_isalnum(alpha));
// 	printf("\nfunction alpha_c result is = %i", ft_isalnum(alpha_c));
// 	printf("\nfunction double = (   %f  ) result is = %i", y, ft_isalnum(y));
// 	printf("\nfunction $ result is = %i", ft_isalnum(ch));
// 	return (0);
// }
