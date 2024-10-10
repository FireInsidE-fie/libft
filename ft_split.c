/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:55:14 by estettle          #+#    #+#             */
/*   Updated: 2024/10/10 12:32:47 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	clear_slices(char **slices)
{
	int	i;

	i = 0;
	while (slices[i])
		free(slices[i++]);
	free(slices);
	return (0);
}

static char	*ft_strndup(const char *s1, size_t n)
{
	char	*copy;

	copy = malloc((n) * sizeof(char));
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s1, n);
	copy[n - 1] = '\0';
	return (copy);
}

static char	**alloc_slices(char const *s, char c)
{
	int		i;
	int		slice_count;
	char	**slices;

	slice_count = 0;
	i = 0;
	if (!*s)
	{
		slices = malloc(sizeof(char *));
		*slices = NULL;
		return (slices);
	}
	while (s[i] == c)
		i++;
	while (s && s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			slice_count++;
			while (s[i] && s[i] != c)
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
	if (!*s)
		return (slices);
	if (!slices)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] == c)
		i++;
	while (s && s[i])
	{
		while (s[i] == c)
			i++;
		s += i;
		i = 0;
		while (s[i] && s[i] != c)
			i++;
		if (i > 0)
		{
			*(slices + j) = ft_strndup(s, i + 1);
			if (!*(slices + j++) && !clear_slices(slices))
				return (NULL);
		}
	}
	slices[j] = NULL;
	return (slices);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*invalidReadCheck;
	invalidReadCheck = malloc(sizeof(char));
	*invalidReadCheck = 0;
	char	**slices = ft_split(invalidReadCheck, 0);
	printf("%s\n", slices[0]);
}
*/
