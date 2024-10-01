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

	original = (void *)src;
	// check if src and dst overlap and if src is BEFORE dst
	i = dst - src;
	if (i < 0)
		i = -i;
	if (i <= len)
	{
		i = len;
		while (i-- > 0)
			*(char *)(dst + i) = *(char *)(src + i);
	}
	else
	{
		i = 0;
		while (i++ < len)
			*(char *)dst++ = *(char *)src++;
	}
	return (original);
}

int	main(void)
{
	char	*melody = "Can. You. Hear. Me?";
	char	roxy[100] = {0};

	printf("%s\n", ft_memmove(roxy, melody, 19));
	printf("%s\n%s\n", melody, roxy);

	printf("%s\n", ft_memmove(roxy+5, roxy, 19));
	printf("%s\n%s\n", melody, roxy);

	printf("%s\n", ft_memmove(roxy+10, roxy, 19));
	printf("%s\n%s\n", melody, roxy);
}
