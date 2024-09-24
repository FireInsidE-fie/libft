/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:55:30 by estettle          #+#    #+#             */
/*   Updated: 2024/09/25 00:03:07 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *s)
{
	unsigned int	count;

	count = 0;
	while (*(s++))
		count++;
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strlen("Wow this is great"));
}
*/
