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

//size_t  ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	o_dstsize;

	o_dstsize = ft_strlen(dst);
	i = o_dstsize;
	j = 0;
	while (src[j] && i < dstsize - 1)
		dst[i++] = src[j++];
	if (dstsize && dstsize > o_dstsize)
		dst[i] = '\0';
	return ((size_t)(dstsize + ft_strlen(src)));
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
