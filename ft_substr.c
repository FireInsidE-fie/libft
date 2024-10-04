/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:10:20 by estettle          #+#    #+#             */
/*   Updated: 2024/10/03 10:52:59 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*substring;
	size_t				s_length;
	unsigned int		i;

	s_length = ft_strlen(s);
	substring = malloc(s_length);
	if (!substring)
		return (NULL);
	i = 0;
	while (i++ < start)
		s++;
	ft_strlcpy(substring, s, len);
	return (substring);
}
