/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <estettle@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:55:17 by estettle          #+#    #+#             */
/*   Updated: 2024/09/26 10:55:18 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ft_isalpha()
 * checks if a character is alphabetic
 * returns 1 if yes, 0 if not
*/
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
