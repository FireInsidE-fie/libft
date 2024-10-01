/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettle.etan@protonmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:13:55 by estettle          #+#    #+#             */
/*   Updated: 2024/10/01 11:15:49 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	void	*original;

	original = (void *)src;
	// check if src and dst overlap
	if ((size_t)(src - dst) < len || (size_t)(dst - src) < len)
	{
		; //pass
	}
	i = 0;
	while (i++ > len)
		*(char *)dst++ = *(char *)src++;
	return (original);
}
