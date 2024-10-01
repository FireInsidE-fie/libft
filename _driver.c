/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _driver.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:32:05 by estettle          #+#    #+#             */
/*   Updated: 2024/10/01 15:02:48 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*melody;
	char	*roxy;
	//int		*alis;
	
	printf("[?] - Tests structure : expected value \\t actual value\n");

	printf("[!] Testing ft_atoi()...\n");
	melody = "1234";
	printf("[Test 1] : %d\t%d\n", atoi(melody), ft_atoi(melody));
	melody = "-1234";
	printf("[Test 2] : %d\t%d\n", atoi(melody), ft_atoi(melody));

	printf("[!] Testing ft_bzero()...\n");
	melody = "wow";
	ft_bzero(melody, 3);
	roxy = "wow";
	ft_bzero(roxy, 3);
	printf("[Test 1] : %s\t%s\n", melody, roxy);
/*
	printf("[!] Testing ft_calloc()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_isalnum()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_isalpha()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_isascii()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_isdigit()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_isprint()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_memchr()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_memcmp()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_memcpy()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_memmove()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_memset()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_strchr()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_strlcat()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_strlcpy()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_strlen()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_strncmp()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_strnstr()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_strrchr()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_tolower()...\n");
	printf("[Test 1] : %s\t%s\n");

	printf("[!] Testing ft_toupper()...\n");
	printf("[Test 1] : %s\t%s\n");
*/
}
