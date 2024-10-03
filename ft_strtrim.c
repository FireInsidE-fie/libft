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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		s1_length;
	int		i;
	int		prefix_nb;
	int		suffix_nb;

	trimmed = 0;
	s1_length = ft_strlen(s1);
	prefix_nb = 0;
	while (s1[prefix_nb])
	{
		i = 0;
		while (set[i])
		{
			if (s1[prefix_nb] == set[i])
				break ;
			i++;
		}
		if (!set[i])
			break ;
		prefix_nb++;
	}
	suffix_nb = 0;
	while (s1[s1_length - suffix_nb - 1])
	{
		i = 0;
		while (set[i])
		{
			if (s1[s1_length - suffix_nb - 1] == set[i])
				break ;
			i++;
		}
		if (!set[i])
			break ;
		suffix_nb++;
	}
	ft_strlcpy(trimmed, s1 + prefix_nb, s1_length - suffix_nb);
	return (trimmed);
}
