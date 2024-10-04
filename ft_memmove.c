/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettle.etan@protonmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:13:55 by estettle          #+#    #+#             */
/*   Updated: 2024/10/01 11:38:33 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	void	*original;

	original = ft_strdup(src); //replace with strlcpy to stop using malloc
	if (src >= dst)
		i = src - dst;
	else
		i = dst - src;
	if (i <= len)
	{
		i = len;
		while (i-- > 0)
			*(char *)(dst + i) = *(char *)(src + i);
	}
	else
	{
		i = -1;
		while (++i < len)
			*(char *)(dst + i) = *(char *)(src + i);
	}
	return (original);
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
