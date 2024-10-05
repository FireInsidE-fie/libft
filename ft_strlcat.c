/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:09:24 by estettle          #+#    #+#             */
/*   Updated: 2024/10/02 14:00:38 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// https://pubs.opengroup.org/onlinepubs/9799919799/functions/strlcat.html
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	o_dstsize;

	o_dstsize = ft_strlen(dst);
	i = o_dstsize;
	j = 0;
	if (dstsize && dstsize > o_dstsize)
	{
		while (src[j] && i < dstsize - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	if (o_dstsize > dstsize)
		return ((size_t)(dstsize + ft_strlen(src)));
	return ((size_t)(o_dstsize + ft_strlen(src)));
}
/*
#include <stdio.h>

int	main(void)
{
	char		melody[100] = "Can. You. ";
	const char	*roxy = "Hear. Me?";

	ft_strlcat(melody, roxy, 15);
	printf("%s\n", melody);
}
*/
