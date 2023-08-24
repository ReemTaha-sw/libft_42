/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:50:53 by rosman            #+#    #+#             */
/*   Updated: 2023/08/15 14:18:57 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	result;
	unsigned long long	max;

	result = 0;
	sign = 1;
	max = 9223372036854775807;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if (result > max && sign == 1)
			return (-1);
		if (result > max && sign == -1)
			return (0);
		str++;
	}
	return (result * sign);
}
// int main()
// {
// 	char str[] = "-21";
// 	printf("\n___atoi %d", atoi(str));
// 	printf("\nft_atoi %d\n", ft_atoi(str));
// }