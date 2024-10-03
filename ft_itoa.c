/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:55:44 by estettle          #+#    #+#             */
/*   Updated: 2024/10/03 10:55:51 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		char_count;
	int		i;
	char	*str;
	
	char_count = 1;
	i = 1;
	if (n < 0)
		char_count++;
	while (n / i >= 10 || n / i <= -10)
	{
		char_count++;
		i *= 10;
	}
	str = malloc(char_count * sizeof(char));
	i = char_count;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (i-- > 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(1234));
	printf("%s\n", ft_itoa(-1234));
	printf("%s\n", ft_itoa(0));
}
