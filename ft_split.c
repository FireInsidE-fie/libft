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

static char	*ft_strndup(const char *s1, size_t n)
{
	char	*copy;

	copy = 0;
	copy = malloc((n + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s1, n);
	copy[n] = '\0';
	return (copy);
}

static char	**alloc_slices(char const *s, char c)
{
	int		i;
	int		slice_count;
	char	**slices;

	slice_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c || s[i] == '\0')
		{
			slice_count++;
			while (s[i] == c)
				i++;
		}
		else
		{
			if (slice_count == 0)
				slice_count++;
			i++;
		}
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
	while (s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		s += i;
		i = 0;
		while (s[i] && s[i] != c)
			i++;
		if (i > 0)
			slices[j++] = ft_strndup(s, i + 1);
	}
	slices[j] = NULL;
	return (slices);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", *ft_split("\0aa\0bbb", '\0'));
}
*/
