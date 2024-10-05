/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:49:44 by estettle          #+#    #+#             */
/*   Updated: 2024/10/01 13:05:34 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <string.h>

int	main(void)
{
	char	*melody = malloc(100);
	char	*roxy = malloc(100);

	ft_strlcpy(melody, "", 19);
	strlcpy(roxy, "", 19);
	ft_putstr_fd(melody, 1);
	ft_putstr_fd(roxy, 1);
}
*/
