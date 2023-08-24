/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosman <rosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 20:29:24 by rosman            #+#    #+#             */
/*   Updated: 2023/08/24 21:43:51 by rosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_set;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
		return (NULL);
	new_set = new;
	lst = lst->next;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		new_set->next = temp;
		new_set = temp;
		lst = lst->next;
	}
	return (new);
}

	// t_list	*result;
	// t_list	*temp;

	// if (lst == NULL || f == NULL)
	// 	return (NULL);
	// result = NULL;
	// while (lst)
	// {
	// 	temp = ft_lstnew((*f)(lst->content));
	// 	if (!temp)
	// 	{
	// 		ft_lstclear(&result, del);
	// 		return (NULL);
	// 	}
	// 	ft_lstadd_back(&result, temp);
	// 	temp = temp->next;
	// 	lst = lst->next;
	// }
	// return (result);