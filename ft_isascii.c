/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:55:24 by estettle          #+#    #+#             */
/*   Updated: 2024/10/01 10:57:31 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_isascii()
 * checks if a character is an ascii characteer or not (any char between 0 and
 * octal 0177 inclusive, man isascii(3))
 * returns 1 if yes, 0 if not
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	return (0);
}
