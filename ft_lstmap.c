/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:17:36 by estettle          #+#    #+#             */
/*   Updated: 2024/10/08 10:17:36 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;	

	if (!lst)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		ft_lstclear(&new_lst, del);
	lst = lst->next;
	while (lst)
	{
		ft_lstadd_back(&new_lst, ft_lstnew(f(lst->content)));
		if (!new_lst)
			ft_lstclear(&new_lst, del);
		lst = lst->next;
	}
	return (new_lst);
}
