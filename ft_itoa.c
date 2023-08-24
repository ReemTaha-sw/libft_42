/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 21:26:49 by rosman            #+#    #+#             */
/*   Updated: 2023/08/24 15:27:56 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(int no)
{
	int	i;

	i = 0;
	if (no == -2147483648)
		return (11);
	if (no < 0)
	{
		no = -no;
		i++;
	}
	while (no > 9)
	{
		no /= 10;
		i++;
	}
	i++;
	return (i);
}

static char	*write_nbr(char *str, long int n)
{
	int	total_len_nbr;

	total_len_nbr = nbr_len(n);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	total_len_nbr--;
	while (n > 0)
	{
		str[total_len_nbr] = (n % 10) + '0';
		total_len_nbr--;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	long int	nb;

	i = nbr_len(n);
	nb = n;
	str = (char *)malloc(sizeof(char) * (i +1));
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	str = write_nbr(str, n);
	str[i] = '\0';
	return (str);
}

// char	*ft_convert(int no)
// {
// 	char	*str;
// 	int		i;

// 	i = 0;
// 	while (no > 9)
// 	{
// 		printf("str[i] = %c",str[i]);
// 		str[i] = (no % 10) + '0';
// 		printf("ok");
// 		no = no / 10;
// 		i++;
// 	}
// 	printf("\ni = % d\n ", i);
// 	str[i+1] = '\0';
// 	return (str);
// }

// void	f_reverse(char *str)
// {
// 	size_t	start;
// 	size_t	end;
// 	char	temp;

// 	start = 0;
// 	end = ft_strlen(str) - 1;
// 	while (start < end)
// 	{
// 		temp = str[start];
// 		str[start] = str[end];
// 		str[end] = temp;
// 		start++;
// 		end--;
// 	}
// }

// char	*ft_itoa(int n)
// {
// 	char	*new;
// 	char	*s;
// 	size_t	len;

// 	s = ft_convert(n);
// 	// printf("the s must be in ita = %s", s);
// 	// len = ft_strlen(s);
// 	// new = (char *)malloc(sizeof(char) * len);
// 	// if (!new)
// 	// 	return (NULL);
// 	// ft_strlcpy(new, s, len);
// 	// printf("the resut must be in ita = %s", new);
// 	// return (new);
// 	return ("new");
// }

// static void	lengths(int n, size_t *len, int *weight)
// {
// 	*len = 1;
// 	if (n >= 0)
// 	{
// 		*len = 0;
// 		n = -n;
// 	}
// 	*weight = 1;
// 	while (n / *weight < -9)
// 	{
// 		*weight *= 10;
// 		*len += 1;
// 	}
// }

// char	*ft_itoa(int n)
// {
// 	size_t		len;
// 	int			weight;
// 	size_t		cur;
// 	char		*str;

// 	lengths(n, &len, &weight);
// 	len++;
// 	str = (char *)malloc(sizeof(*str) * (len));
// 	if (str == NULL)
// 		return (NULL);
// 	cur = 0;
// 	if (n < 0)
// 	{
// 		str[cur] = '-';
// 		cur++;
// 	}
// 	if (n > 0)
// 		n = -n;
// 	while (weight >= 1)
// 	{
// 		str[cur++] = -(n / weight % 10) + 48;
// 		weight /= 10;
// 	}
// 	str[cur] = '\0';
// 	return (str);
// }

// int main()
// {
//     int x = 254;

//     printf("the result = %s",ft_itoa(x));
// }

// char    *ft_itoa(int n)
// {
//     int i;
//     int no = 254;
//     char a[10];

//     i = 0;
//     while (no > 0)
//     {
//         a[i] = no % 10 + '0';
//         no /= 10;
//         printf("\nno[%zu] = %c\n", i,a[i]);
//         i++;
//     }
//     a[i] = '\0';
//     return (0);
// }