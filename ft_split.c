/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:50:38 by rosman            #+#    #+#             */
/*   Updated: 2023/08/24 15:30:40 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*s)
	{
		if (*s == c)
			i = 0;
		else if (!i)
		{
			i = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static size_t	count_char(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	return (i);
}

static char	*world_dup(const char *s, size_t len)
{
	char	*world;
	size_t	i;

	i = 0;
	world = (char *)malloc(sizeof(char) * (len + 1));
	if (!world)
		return (NULL);
	while (*s && i < len)
	{
		world[i] = *s;
		i++;
		s++;
	}
	world[i] = '\0';
	return (world);
}

static void	free_mem(char **str)
{
	size_t	i;

	if (str == NULL)
		return ;
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	size_t	world_no;
	size_t	i;
	char	**str;

	if (!s)
		return (NULL);
	world_no = count_words(s, c);
	i = -1;
	str = (char **)malloc(sizeof(char *) * (world_no + 1));
	if (!str)
		return (NULL);
	while (*s != '\0' && ++i < world_no)
	{
		while (*s == c)
			s++;
		str[i] = world_dup(s, count_char(s, c));
		if (!str[i])
		{
			free_mem(str);
			return (NULL);
		}
		s += count_char(s, c);
	}
	str[world_no] = NULL;
	return (str);
}

// int main()
// {
// 	const char *a = "reemo ,  osman , - - - , l";
// 	char c = ',';
// 	char **new = ft_split(a, c);

// 	// new = world_dup(a,6);
// 	printf("\nValue: %d\n", **new); 
// 	// printf("\nresult = %d", ft_split(a, c));
// 	for (size_t i = 0; new[i] != NULL; i++)
// 	{
// 		printf("\nresult = %s\n", new[i]);
// 	}
// 	free(new);
// }
