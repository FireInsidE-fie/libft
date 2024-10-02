/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 23:03:11 by estettle          #+#    #+#             */
/*   Updated: 2024/10/01 23:11:03 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		str_length;
	char	*copy;

	str_length = ft_strlen(s1) * sizeof(char);
	copy = malloc(str_length);
	while (str_length--)
		*(copy++) = *(s1++);
	return (copy);
}
