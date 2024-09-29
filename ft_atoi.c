/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 21:46:02 by estettle          #+#    #+#             */
/*   Updated: 2024/09/28 12:27:09 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	converted;

	i = 0;
	sign = 1;
	converted = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		while (str[i] == '-' || str[i] == '+')
			if (str[i] == '-')
				sign *= -1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			converted += str[i];
			converted *= 10;
			i++;
		}
	}
	return (converted * sign);
}
