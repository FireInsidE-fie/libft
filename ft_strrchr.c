/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:25:43 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 10:31:20 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	str_length;

	str_length = 0;
	while (*s)
	{
		str_length++;
		s++;
	}
	if (*s == c)
		return (s);
	while (str_length >= 0)
	{
		s--;
		str_length--;
		if (*s == c)
			return s;
	}
	return (NULL);
}
