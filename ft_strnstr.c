/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:31:11 by estettle          #+#    #+#             */
/*   Updated: 2024/09/29 08:49:12 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle)
		return ((char*)haystack);
	i = 0;
	j = 0;
	while (i < len)
	{
		j = 0;
		while (j < (len - i) && haystack[j] == needle[j])
		{
			if (!needle[j])
				return ((char*)haystack);
			j++;
			if (haystack[j] != needle[j])
				break ;
		}
		haystack++;
		i++;
	}
	return (NULL);
}
