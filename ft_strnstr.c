/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:31:11 by estettle          #+#    #+#             */
/*   Updated: 2024/09/28 12:14:58 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	if (!needle)
		return (haystack);
	i = 0;
	j = 0;
	while (i < len)
	{
		j = 0;
		while (j < (len - i) && haystack[j] == needle[j])
		{
			if (!needle[j])
				return (haystack);
			j++;
			if (haystack[j] != needle[j])
				break;
		}
		haystack++;
		i++;
	}
	return (NULL);
}
