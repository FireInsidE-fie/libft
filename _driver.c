/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _driver.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:32:05 by estettle          #+#    #+#             */
/*   Updated: 2024/10/01 23:18:38 by estettle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// libraries needed for testing only
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	void	*melody = malloc(100);
	void	*roxy = malloc(100);
	int		alis;
	
	printf("[!] - Starting tests for part 1 functions...\n");

	printf("[?] - Tests structure : expected value \\t actual value\n");

	printf("[!] Testing ft_atoi()...\n");
	melody = "1234";
	printf("[Test 1] : %d\t%d\n", atoi(melody), ft_atoi(melody));
	melody = "-1234";
	printf("[Test 2] : %d\t%d\n", atoi(melody), ft_atoi(melody));

	printf("[!] Testing ft_bzero()...\n");
	bzero(roxy, 3);
	ft_bzero(roxy, 3);
	printf("[Test 1] : %s\t%s\n", (char *)melody, (char *)roxy);
	ft_bzero(roxy, 0);
	printf("[Test 2] : %s\t%s\n", (char *)melody, (char *)roxy);
/*
	printf("[!] Testing ft_calloc()...\n");
	printf("[Test 1] : %s\t%s\n");
*/
	printf("[!] Testing ft_isalnum()...\n");
	alis = 'C';
	printf("[Test 1] : %d\t%d\n", isalnum(alis), ft_isalnum(alis));
	alis = '\0';
	printf("[Test 2] : %d\t%d\n", isalnum(alis), ft_isalnum(alis));
	alis = '9';
	printf("[Test 3] : %d\t%d\n", isalnum(alis), ft_isalnum(alis));

	printf("[!] Testing ft_isalpha()...\n");
	alis = 'C';
	printf("[Test 1] : %d\t%d\n", isalpha(alis), ft_isalpha(alis));
	alis = '\0';
	printf("[Test 2] : %d\t%d\n", isalpha(alis), ft_isalpha(alis));
	alis = '9';
	printf("[Test 3] : %d\t%d\n", isalpha(alis), ft_isalpha(alis));

	printf("[!] Testing ft_isascii()...\n");
	alis = 'C';
	printf("[Test 1] : %d\t%d\n", isascii(alis), ft_isascii(alis));
	alis = '\0';
	printf("[Test 2] : %d\t%d\n", isascii(alis), ft_isascii(alis));
	alis = '9';
	printf("[Test 3] : %d\t%d\n", isascii(alis), ft_isascii(alis));

	printf("[!] Testing ft_isdigit()...\n");
	alis = 'C';
	printf("[Test 1] : %d\t%d\n", isdigit(alis), ft_isdigit(alis));
	alis = '\0';
	printf("[Test 2] : %d\t%d\n", isdigit(alis), ft_isdigit(alis));
	alis = '9';
	printf("[Test 3] : %d\t%d\n", isdigit(alis), ft_isdigit(alis));

	printf("[!] Testing ft_isprint()...\n");
	alis = 'C';
	printf("[Test 1] : %d\t%d\n", isprint(alis), ft_isprint(alis));
	alis = '\0';
	printf("[Test 1] : %d\t%d\n", isprint(alis), ft_isprint(alis));
	alis = '9';
	printf("[Test 1] : %d\t%d\n", isprint(alis), ft_isprint(alis));
/*
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
*/
	printf("[!] Testing ft_strlen()...\n");
	melody = "Can. You. Hear. Me?";
	printf("[Test 1] : %zu\t%zu\n", strlen(melody), ft_strlen(melody));
	melody = "I believe life is here for us to become kinder...";
	printf("[Test 2] : %zu\t%zu\n", strlen(melody), ft_strlen(melody));
	melody = "Can. You. Hear. Me?";
	printf("[Test 3] : %zu\t%zu\n", strlen(melody), ft_strlen(melody));
/*
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
