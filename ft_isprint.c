/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:55:42 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 10:55:44 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_isprint()
 * checks if a character is printable or not
 * returns 1 if yes, 0 if not
*/
int	ft_isprint(int c)
{
	if (c >= '\040' && c <= '\176')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint('\0'));
}
*/
