/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettle.etan@protonmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:13:55 by estettle          #+#    #+#             */
/*   Updated: 2024/10/08 12:56:51 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (dst);
	if (dst <= src)
		i = dst - src;
	else
		i = src - dst;
	if (i > len || src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		i = len;
		while (--i)
			*(char *)(dst + i) = *(char *)(src + i);
	}
	return (dst);
}
/*
//#include <stdio.h>

int	main(void)
{
	char	*melody = "Can. You. Hear. Me?";
	void	*roxy = ft_calloc(100, 1);

	printf("%s\n", (char *)ft_memmove(roxy, melody, 19));
	printf("%s\n", melody);
	printf("%s\n", roxy);

	printf("%s\n", (char *)ft_memmove(roxy+5, melody, 19));
	printf("%s\n", melody);
	printf("%s\n", roxy);

	printf("%s\n", (char *)ft_memmove(roxy+10, melody, 19));
	printf("%s\n", melody);
	printf("%s\n", roxy);
}
*/
