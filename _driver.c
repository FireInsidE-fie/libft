/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _driver.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estettle <stettler.etan@protonmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:32:05 by estettle          #+#    #+#             */
/*   Updated: 2024/10/03 18:25:29 by estettle         ###   ########.fr       */
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

	printf("[?] - Tests structure : expected value \\t - \\t actual value\n");

	printf("[!] Testing ft_atoi()...\n");
	melody = "1234";
	printf("[Test 1] : %d\t-\t%d\n", atoi(melody), ft_atoi(melody));
	melody = "-1234";
	printf("[Test 2] : %d\t-\t%d\n", atoi(melody), ft_atoi(melody));
	melody = "";
	printf("[Test 3] : %d\t-\t%d\n", atoi(melody), ft_atoi(melody));
	melody = "";
	printf("[Test 4] : %d\t-\t%d\n", atoi(melody), ft_atoi(melody));

	printf("[!] Testing ft_bzero()...\n");
	bzero(roxy, 3);
	ft_bzero(roxy, 3);
	printf("[Test 1] : %s\t-\t%s\n", (char *)melody, (char *)roxy);
	ft_bzero(roxy, 0);
	printf("[Test 2] : %s\t-\t%s\n", (char *)melody, (char *)roxy);
/*
	printf("[!] Testing ft_calloc()...\n");
	printf("[Test 1] : %s\t-\t%s\n");
*/
	printf("[!] Testing ft_isalnum()...\n");
	alis = 'C';
	printf("[Test 1] : %d\t-\t%d\n", isalnum(alis), ft_isalnum(alis));
	alis = '\0';
	printf("[Test 2] : %d\t-\t%d\n", isalnum(alis), ft_isalnum(alis));
	alis = '9';
	printf("[Test 3] : %d\t-\t%d\n", isalnum(alis), ft_isalnum(alis));

	printf("[!] Testing ft_isalpha()...\n");
	alis = 'C';
	printf("[Test 1] : %d\t-\t%d\n", isalpha(alis), ft_isalpha(alis));
	alis = '\0';
	printf("[Test 2] : %d\t-\t%d\n", isalpha(alis), ft_isalpha(alis));
	alis = '9';
	printf("[Test 3] : %d\t-\t%d\n", isalpha(alis), ft_isalpha(alis));

	printf("[!] Testing ft_isascii()...\n");
	alis = 'C';
	printf("[Test 1] : %d\t-\t%d\n", isascii(alis), ft_isascii(alis));
	alis = '\0';
	printf("[Test 2] : %d\t-\t%d\n", isascii(alis), ft_isascii(alis));
	alis = '9';
	printf("[Test 3] : %d\t-\t%d\n", isascii(alis), ft_isascii(alis));

	printf("[!] Testing ft_isdigit()...\n");
	alis = 'C';
	printf("[Test 1] : %d\t-\t%d\n", isdigit(alis), ft_isdigit(alis));
	alis = '\0';
	printf("[Test 2] : %d\t-\t%d\n", isdigit(alis), ft_isdigit(alis));
	alis = '9';
	printf("[Test 3] : %d\t-\t%d\n", isdigit(alis), ft_isdigit(alis));

	printf("[!] Testing ft_isprint()...\n");
	alis = 'C';
	printf("[Test 1] : %d\t-\t%d\n", isprint(alis), ft_isprint(alis));
	alis = '\0';
	printf("[Test 2] : %d\t-\t%d\n", isprint(alis), ft_isprint(alis));
	alis = '9';
	printf("[Test 3] : %d\t-\t%d\n", isprint(alis), ft_isprint(alis));

	printf("[!] Testing ft_memchr()...\n");
	melody = "Can. You. Hear. Me?";
	printf("[Test 1] : %s\t-\t%s\n", (char *)memchr(melody, 'Y', 20), (char *)ft_memchr(melody, 'Y', 20));
	printf("[Test 2] : %s\t-\t%s\n", (char *)memchr(melody, '.', 1), (char *)ft_memchr(melody, '.', 1));
	printf("[Test 3] : %s\t-\t%s\n", (char *)memchr(melody, '.', 10), (char *)ft_memchr(melody, '.', 10));

	printf("[!] Testing ft_memcmp()...\n");
	melody = "Can. You. Hear. Me?";
	roxy = "Can. You! Hear. Me:";
	printf("[Test 1] : %d\t-\t%d\n", memcmp(melody, roxy, 15), ft_memcmp(melody, roxy, 15));
	melody = "Can. You. Hear. Me?";
	roxy = "";
	printf("[Test 2] : %d\t-\t%d\n", memcmp(melody, roxy, 10), ft_memcmp(melody, roxy, 10));
	melody = "Can. You. Hear. Me?";
	roxy = "Can. You. Hear. Me!";
	printf("[Test 3] : %d\t-\t%d\n", memcmp(melody, roxy, 10), ft_memcmp(melody, roxy, 10));
/*
	printf("[!] Testing ft_memcpy()...\n");
	printf("[Test 1] : %s\t-\t%s\n");

	printf("[!] Testing ft_memmove()...\n");
	printf("[Test 1] : %s\t-\t%s\n");

	printf("[!] Testing ft_memset()...\n");
	printf("[Test 1] : %s\t-\t%s\n");
*/
	printf("[!] Testing ft_strchr()...\n");
	melody = "Can. You. Hear. Me?";
	printf("[Test 1] : %s\t-\t%s\n", (char *)memchr(melody, 'Y', 20), (char *)ft_memchr(melody, 'Y', 20));
	printf("[Test 2] : %s\t-\t%s\n", (char *)memchr(melody, '.', 1), (char *)ft_memchr(melody, '.', 1));
	printf("[Test 3] : %s\t-\t%s\n", (char *)memchr(melody, '.', 10), (char *)ft_memchr(melody, '.', 10));

	printf("[!] Testing ft_strdup()...\n");
	melody = "Can. You. Hear. Me?";
	printf("[Test 1] : %s\t-\t%s\n", strdup(melody), ft_strdup(melody));
	melody = "";
	printf("[Test 2] : %s\t-\t%s\n", strdup(melody), ft_strdup(melody));

	printf("[!] Testing ft_strlcat()...\n");
	char	cat1[100] = "Can. You. ";
	char	cat2[100] = "Hear. Me?";
	char	cat3[100] = "Can. You. ";
	strlcat(cat1, cat2, 15);
	ft_strlcat(cat3, cat2, 15);
	printf("[Test 1] : %s\t-\t%s\n", cat1, cat3);
	char	cat4[100] = "";
	char	cat5[100] = "wow this is great";
	char	cat6[100] = "";
	strlcat(cat4, cat5, 15);
	ft_strlcat(cat6, cat5, 15);
	printf("[Test 2] : %s\t-\t%s\n", cat4, cat6);
/*
	printf("[!] Testing ft_strlcpy()...\n");
	printf("[Test 1] : %s\t-\t%s\n");
*/
	printf("[!] Testing ft_strlen()...\n");
	melody = "Can. You. Hear. Me?";
	printf("[Test 1] : %zu\t-\t%zu\n", strlen(melody), ft_strlen(melody));
	melody = "I believe life is here for us to become kinder...";
	printf("[Test 2] : %zu\t-\t%zu\n", strlen(melody), ft_strlen(melody));
	melody = "Can. You. Hear. Me?";
	printf("[Test 3] : %zu\t-\t%zu\n", strlen(melody), ft_strlen(melody));

	printf("[!] Testing ft_strncmp()...\n");
	melody = "Can. You. Hear. Me?";
	roxy = "Can. You! Hear. Me:";
	printf("[Test 1] : %d\t-\t%d\n", strncmp(melody, roxy, 15), ft_strncmp(melody, roxy, 15));
	melody = "Can. You. Hear. Me?";
	roxy = "";
	printf("[Test 2] : %d\t-\t%d\n", strncmp(melody, roxy, 10), ft_strncmp(melody, roxy, 10));
	melody = "Can. You. Hear. Me?";
	roxy = "Can. You. Hear. Me!";
	printf("[Test 3] : %d\t-\t%d\n", strncmp(melody, roxy, 10), ft_strncmp(melody, roxy, 10));
/*
	printf("[!] Testing ft_strnstr()...\n");
	printf("[Test 1] : %s\t-\t%s\n");

	printf("[!] Testing ft_strrchr()...\n");
	printf("[Test 1] : %s\t-\t%s\n");

	printf("[!] Testing ft_tolower()...\n");
	printf("[Test 1] : %s\t-\t%s\n");

	printf("[!] Testing ft_toupper()...\n");
	printf("[Test 1] : %s\t-\t%s\n");
*/
	printf("[!] - Starting tests for part 2 functions...\n");

	// ft_substr()
	// ft_strjoin()

	printf("[!] Testing ft_strtrim()...\n");
	printf("[Test 1] : %s\n", ft_strtrim("1234Can. You. Hear. Me?4312", "1234"));
	printf("[Test 2] : %s\n", ft_strtrim("wowwow1234Can. You. Hear. Me?4312", "1234"));
	printf("[Test 3] : %s\n", ft_strtrim("12934Can. You. Hear. Me?43125", "1234"));
	printf("[Test 4] : %s\n", ft_strtrim("4312", "1234"));
	printf("[Test 5] : %s\n", ft_strtrim("43126", "1234"));
	printf("[Test 6] : %s\n", ft_strtrim("64312", "1234"));

	printf("[!] Testing ft_split()...\n");
	char	**result = ft_split("wow this works", ' ');
	printf("[Test 1] : %s %s %s\n", result[0], result[1], result[2]);

	printf("[!] Testing ft_itoa()...\n");
	printf("[Test 1] : %s\n", ft_itoa(1234));
	printf("[Test 2] : %s\n", ft_itoa(-1234));
	printf("[Test 3] : %s\n", ft_itoa(0));
	printf("[Test 4] : %s\n", ft_itoa(2147483647));
	printf("[Test 5] : %s\n", ft_itoa(-2147483648));

	// ft_strmapi()
	// ft_striteri()
	// ft_putchar_fd()
	// ft_putstr_fd()
	// ft_putendl_fd()
	// ft_putnbr_fd()
/*
	printf("[!] - Starting tests for bonus part functions...\n");

	// ft_lstnew()
	// ft_lstadd_front()
	// ft_lstsize()
	// ft_lstlast()
	// ft_lstadd_back()
	// ft_lstdelone()
	// ft_lstclear()
	// ft_lstiter()
	// ft_lstmap()
*/
}
