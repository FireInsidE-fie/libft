/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 23:03:11 by estettle          #+#    #+#             */
/*   Updated: 2024/10/02 12:44:45 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//size_t  ft_strlen(const char *s);

char	*ft_strdup(const char *s1)
{
	int		str_length;
	char	*copy;
	int		i;

	str_length = (ft_strlen(s1) + 1) * sizeof(char);
	copy = malloc(str_length);
	i = 0;
	while (str_length--)
		copy[i++] = *(s1++);
	copy[i] = '\0';
	return (copy);
}
/*
int	main(void)
{
	ft_strdup("Can. You. Hear. Me?");
}
*/
