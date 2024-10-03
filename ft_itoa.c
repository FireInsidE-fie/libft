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

int static	ft_get_char_count(int n)
{
	int	i;
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	i = 1;
	while (n / i >= 10)
	{
		count++;
		i *= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		char_count;
	int		i;
	char	*str;
	int		is_negative;

	char_count = ft_get_char_count(n);
	str = malloc(char_count * sizeof(char));
	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	is_negative = 0;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		is_negative = 1;
	}
	i = char_count;
	while (i-- > (0 + is_negative))
	{
		str[i] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(1234));
	printf("%s\n", ft_itoa(-1234));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
}
*/
