/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:55:14 by estettle          #+#    #+#             */
/*   Updated: 2024/10/03 10:55:26 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	slice_count;
	char			**slices;

	i = 0;
	slice_count = 1;
	while (s[i++])
	{
		while (s[i++] && s[i] != c)
			;
		slice_count++;
		while (s[i++] == c)
			;
	}
	slices = malloc(slice_count * sizeof(char *));
	if (!slices)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i++] && s[i] != c)
			;
		slices[j] = malloc(i * sizeof(char));
		if (!slices)
			return (NULL);
		ft_strlcpy(slices[j++], s, i - 1);
		while (s[i++] == c)
			;
		while (--i)
			s++;
	}
	return (slices);
}
/*
int	main(void)
{
	ft_split("Can. You. Hear. Me?", ' ');
}
*/
