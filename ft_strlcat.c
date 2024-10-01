/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:09:24 by estettle          #+#    #+#             */
/*   Updated: 2024/10/01 13:24:49 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*dst && i < dstsize)
	{
		dst++;
		i++;
	}
	while (*src && i < dstsize)
	{
		*(dst++) = *(src++);
		i++;
	}
	*dst = '\0';
	return ((size_t)(ft_strlen(dst) + ft_strlen(src)));
}
