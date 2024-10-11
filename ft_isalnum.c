/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:55:12 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 10:55:14 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_isalnum()
 * checks if a character is alphanumeric
 * returns 1 if yes, 0 if not
*/
int	ft_isalnum(int c)
{
	if (
		(c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9')
	)
		return (1);
	return (0);
}
