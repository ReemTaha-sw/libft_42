/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:37:53 by rosman            #+#    #+#             */
/*   Updated: 2023/08/02 14:46:59 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int	main(void)
// {
// 	int	number;
// 	int	zero;
// 	int	alpha;
// 	int	alpha_c;

// 	number = '5';
// 	zero = 48;
// 	alpha = 'a';
// 	alpha_c = 'A';
// 	printf("function number result is = %i", ft_isalpha(number));
// 	printf("\nfunction zero result is = %i", ft_isalpha(zero));
// 	printf("\nfunction alpha result is = %i", ft_isalpha(alpha));
// 	printf("\nfunction alpha_c result is = %i", ft_isalpha(alpha_c));
// 	return (0);
// }
