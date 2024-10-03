/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:43:42 by estettle          #+#    #+#             */
/*   Updated: 2024/10/03 11:54:00 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		s1_length;
	int		i;
	int		prefix_nb;
	int		suffix_nb;

	s1_length = ft_strlen(s1);
	prefix_nb = -1;
	while (s1[++prefix_nb]) // create a get prefix nb function
	{
		i = -1;
		while (set[++i])
			if (s1[prefix_nb] == set[i])
				break ;
		if (!set[i])
			break ;
	}
	suffix_nb = -1;
	while (s1[s1_length - ++suffix_nb - 1]) // create a get suffix nb function
	{
		i = -1;
		while (set[++i])
			if (s1[s1_length - suffix_nb - 1] == set[i])
				break ;
		if (!set[i])
			break ;
	}
	trimmed = malloc(s1_length - prefix_nb - suffix_nb);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + prefix_nb, s1_length - prefix_nb - suffix_nb);
	return (trimmed);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("[Test 4] : %s\n", ft_strtrim("4312", "1234"));
}
*/
