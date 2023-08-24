/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:46:55 by rosman            #+#    #+#             */
/*   Updated: 2023/08/14 15:47:27 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(s1) + 1;
	new_str = (char *)malloc(len);
	if (new_str != NULL)
		ft_strlcpy(new_str, s1, len);
	return (new_str);
}
