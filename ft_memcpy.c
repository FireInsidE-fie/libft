/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettle.etan@protonmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:45:36 by estettle          #+#    #+#             */
/*   Updated: 2024/10/01 10:40:28 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	void	*original;
	size_t	i;

	original = dst;
	i = 0;
	while (i < n && *(char *)(dst + i) && *(char *)(src + i))
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (original);
}
/*
int	main(void)
{
	char	*melody = "Can. You. Hear. Me?";
	char	roxy[100];

	printf("%s\n", ft_memcpy(roxy, melody, 20));
	printf("%s\n%s\n", melody, roxy);

	printf("%s\n", ft_memcpy(roxy+5, melody, 20));
	printf("%s\n%s\n", melody, roxy);
}
*/
