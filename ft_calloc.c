/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:46:43 by rosman            #+#    #+#             */
/*   Updated: 2023/08/13 19:47:57 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocated_memory;
	size_t	total_size;

	if (size != '\0' && count > UINT32_MAX / size)
		return (NULL);
	total_size = count * size;
	allocated_memory = malloc(total_size);
	if (allocated_memory != NULL )
		ft_memset(allocated_memory, 0, total_size);
	return (allocated_memory);
}
// int main() {
//     int *arr = (int *)ft_calloc(0, sizeof(int));

//     if (arr != NULL) {
//         printf("Memory allocated.\n");
//         free(arr);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }