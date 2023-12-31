/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:47:14 by rosman            #+#    #+#             */
/*   Updated: 2023/08/20 16:49:17 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
// int main()
// {
// 	// char s[] = "hi!";

// 	// int	fd = 1;
// 	// int	i;

// 	// i = 0;
// 	// while (s[i] != '\0')
// 	// {
// 	// 	write(fd, &s[i], 1);
// 	// 	i++;
// 	// }
// 	ft_putstr_fd("hi!", 1);
// }