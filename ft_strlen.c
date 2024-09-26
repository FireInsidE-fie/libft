/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:54:55 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 10:54:59 by estettle         ###   ########.fr       */
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
