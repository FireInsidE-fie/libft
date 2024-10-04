/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:55:14 by estettle          #+#    #+#             */
/*   Updated: 2024/10/04 09:16:52 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**alloc_slices(char const *s, char c)
{
	int		i;
	int		slice_count;
	char	**slices;

	slice_count = 1;
	i = 0;
	while (s[i++])
	{
		while (s[i++] && s[i] != c)
			;
		slice_count++;
		while (s[i++] == c)
			;
	}
	slices = malloc((slice_count + 1) * sizeof(char *));
	return (slices);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**slices;

	slices = alloc_slices(s, c);
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
		ft_strlcpy(slices[j++], s, i);
		while (s[i++] == c)
			;
		while (--i)
			s++;
	}
	slices[j] = NULL;
	return (slices);
}
/*
int	main(void)
{
	ft_split("Can. You. Hear. Me?", ' ');
}
*/
