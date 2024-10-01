/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:44:42 by estettle          #+#    #+#             */
/*   Updated: 2024/10/01 15:04:13 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*area;
	size_t	b_size;

	b_size = count * size;
	area = malloc(b_size);
	if (!area)
		return (NULL);
	ft_bzero(area, b_size);
	return (area);
}
