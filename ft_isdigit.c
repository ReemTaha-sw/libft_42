/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:31:26 by rosman            #+#    #+#             */
/*   Updated: 2023/08/02 14:46:46 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
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
// 	printf("function number result is = %i", ft_isdigit(number));
// 	printf("\nfunction zero result is = %i", ft_isdigit(zero));
// 	printf("\nfunction alpha result is = %i", ft_isdigit(alpha));
// 	printf("\nfunction alpha_c result is = %i", ft_isdigit(alpha_c));
// 	return (0);
// }
