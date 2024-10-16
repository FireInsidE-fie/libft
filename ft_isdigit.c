/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:55:32 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 10:55:33 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_isascii()
 * checks if a character is a digit or not
 * returns 1 if yes, 0 if not
*/
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
