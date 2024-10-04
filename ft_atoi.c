/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:46:02 by estettle          #+#    #+#             */
/*   Updated: 2024/10/01 23:14:49 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	converted;

	i = 0;
	sign = 1;
	converted = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -sign;
	while (str[i] >= '0' && str[i] <= '9')
	{
		converted += str[i] - '0';
		if (str[i++ + 1])
			converted *= 10;
	}
	return (converted * sign);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("+1234"));
}
*/
