/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:43:57 by estettle          #+#    #+#             */
/*   Updated: 2024/10/07 22:09:02 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	new->next = NULL;
	if (!lst)
		lst = &new;
	if (!(*lst))
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
