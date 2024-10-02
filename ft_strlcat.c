/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:09:24 by estettle          #+#    #+#             */
/*   Updated: 2024/10/02 11:56:38 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*dst)
		dst++;
	while (*src && i < dstsize)
	{
		*(dst++) = *(src++);
		i++;
	}
	*dst = '\0';
	return ((size_t)(dstsize + ft_strlen(src)));
}
