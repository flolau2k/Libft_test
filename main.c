/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:12:50 by flauer            #+#    #+#             */
/*   Updated: 2023/03/20 11:25:00 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <string.h>

#define TEST_FUNC(CONDITION)	if(CONDITION) \
									ft_putstr_fd("passed\n", 1); \
								else \
									ft_putstr_fd("\033[1;31mfailed\033[0m\n", 1);

void	ft_putstrn_fd(char *s, int fd, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

void	put_bytes(char *buf, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		printf("%i ", buf[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	TEST_FUNC(!ft_isalpha(64));
	TEST_FUNC(ft_isalpha('a'));
	TEST_FUNC(ft_isalpha('Z'));
	TEST_FUNC(ft_isalpha('A'));
	TEST_FUNC(ft_isalpha('z'));
	TEST_FUNC(!ft_isalpha('z' + 1));
	TEST_FUNC(!ft_isalpha('Z' + 1));
	TEST_FUNC(!ft_isalpha('a' - 1));
	TEST_FUNC(!ft_isalpha('A' - 1));
	TEST_FUNC(ft_isdigit('0'));
	TEST_FUNC(ft_isdigit('9'));
	TEST_FUNC(!ft_isdigit('0' - 1));
	TEST_FUNC(!ft_isdigit('9' + 1));
	TEST_FUNC(!ft_isdigit('f'));
	TEST_FUNC(!ft_isascii(128));
	TEST_FUNC(ft_isascii(39));
	TEST_FUNC(ft_isascii(0));

	ft_putstr_fd("\nft_isprint\n", 1);
	TEST_FUNC(!ft_isprint(30));
	TEST_FUNC(ft_isprint(69));
	TEST_FUNC(!ft_isalnum('?'));
	TEST_FUNC(ft_isalnum('b'));

	ft_putstr_fd("\nft_strncmp\n", 1);
	TEST_FUNC(ft_strncmp("hallo123", "hallo123", 8) == 0);
	TEST_FUNC(ft_strncmp("hallo123", "hallo123", 30) == 0);
	TEST_FUNC(ft_strncmp("hallo123", "hallo", 5) == 0);
	TEST_FUNC(ft_strncmp("hallo123", "hallo234", 8) < 0);
	TEST_FUNC(ft_strncmp("1234", "12345", 5) < 0);

	ft_putstr_fd("\nft_substr\n", 1);
	TEST_FUNC(ft_strncmp(ft_substr("hallo12345", 0, 10), "hallo12345", 10) == 0);
	TEST_FUNC(ft_strncmp(ft_substr("hallo12345", 1, 9), "allo12345", 9) == 0);
	TEST_FUNC(ft_strncmp(ft_substr("hallo12345", 0, 5), "hallo", 5) == 0);

	ft_putstr_fd("\nft_strlen\n", 1);
	TEST_FUNC(ft_strlen("1234567890") == 10);
	TEST_FUNC(ft_strlen("") == 0);
	TEST_FUNC(ft_strlen("100") == 3);

	ft_putstr_fd("\nft_strlcpy\n", 1);
	
	ft_putstr_fd("\nft_strlcat\n", 1);
	char	a1[50] = "This";
	char	a2[] = "that";
	char	a3[50] = "This";
	char	a4[] = "that";
	printf("return: %zu, string is: %s\n", strlcat(a1, a2, 0), a1);
	printf("return: %zu, string is: %s\n", ft_strlcat(a3, a4, 0), a3);

	ft_putstr_fd("\nft_memcmp\n", 1);
	TEST_FUNC(ft_memcmp("hallo123", "hallo123", 8) == 0);
	TEST_FUNC(ft_memcmp("hallo123", "hallo123", 30) == 0);
	TEST_FUNC(ft_memcmp("hallo123", "hallo", 5) == 0);
	TEST_FUNC(ft_memcmp("hallo123", "hallo234", 8) < 0);
	TEST_FUNC(ft_memcmp("1234", "12345", 5) < 0);
	
	ft_putstr_fd("\nft_memset\n", 1);
	char *buf = malloc(10);
	ft_memset(buf, '1', 10);
	//put_bytes(buf, 10);
	TEST_FUNC(ft_memcmp(buf, "1111111111", 10) == 0);

	ft_putstr_fd("\nft_bzero\n", 1);
	ft_bzero(buf, 10);
	TEST_FUNC(ft_memcmp(buf, "\0\0\0\0\0\0\0\0\0\0", 10) == 0);

	ft_putstr_fd("\nft_memcpy\n", 1);
	char *buf2 = malloc(10);
	ft_memset(buf, '1', 10);
	ft_memcpy(buf2, buf, 10);
	TEST_FUNC(ft_memcmp(buf, buf2, 10) == 0);
	ft_memset(buf, '&', 10);
	ft_memcpy(buf2, buf, 10);
	TEST_FUNC(ft_memcmp(buf, buf2, 10) == 0);
	free(buf);
	free(buf2);

	ft_putstr_fd("\nft_memmove\n", 1);
	buf = malloc(32);
	ft_memset(buf, ' ', 32);
	buf[31] = 0;
	char *s2 = buf + 12;
	char *s1 = buf;
	ft_strlcpy(s2, "This string has 19b", 32);
	ft_putendl_fd(s1, 1);
	ft_memmove(s1, s2, 20);
	ft_putendl_fd(s1, 1);
	ft_memmove(s2, s1, 20);
	ft_putendl_fd(s1, 1);

	ft_putstr_fd("\nft_strchr\n", 1);
	TEST_FUNC(ft_strchr(buf, 's') == buf + 3);

	ft_putstr_fd("\nft_strrchr\n", 1);
	TEST_FUNC(ft_strrchr(buf, 's') == buf + 26);

	ft_putstr_fd("\nft_memchr\n", 1);
	TEST_FUNC(ft_memchr(buf, 's', 32) == buf + 3);

	ft_putstr_fd("\nft_strnstr\n", 1);
	char *hay = "Das ist das Haus vom Nikolaus";
	char *needle = "Haus";
	TEST_FUNC(ft_strnstr(hay, needle, 30) == hay + 12);
	char *needle2 = "";
	TEST_FUNC(ft_strnstr(hay, needle2, 30) == hay);
	char *needle3 = "asdf";
	TEST_FUNC(ft_strnstr(hay, needle3, 30) == NULL);

	ft_putstr_fd("\nft_atoi\n", 1);
	TEST_FUNC(ft_atoi("1234") == 1234);
	TEST_FUNC(ft_atoi("  -----32") == -32);
	TEST_FUNC(ft_atoi("  ++--4") == 4);

	ft_putendl_fd("\nft_calloc", 1);
	void	*test2 = ft_calloc(10, 1);
	void	*check = calloc(10, 1);
	TEST_FUNC(ft_memcmp(test2, check, 10) == 0);
	free(check);
	
	ft_putendl_fd("\nft_strdup", 1);
	char *dup;

	dup = ft_strdup(hay);
	TEST_FUNC(ft_strncmp(hay, dup, 30) == 0);
	free(dup);
	free(test2);

	ft_putendl_fd("\nft_strjoin", 1);
	test2 = ft_strjoin(hay, needle);
	TEST_FUNC(ft_strncmp(test2, "Das ist das Haus vom NikolausHaus", 34) == 0);
	
	ft_putendl_fd("\nft_strtrim", 1);
	char	trimtest[] = "123Hallo3212";
	ft_putendl_fd(trimtest, 1);
	check = ft_strtrim(trimtest, "123");
	TEST_FUNC(ft_strncmp("Hallo", check, 12) == 0);
	ft_putendl_fd(check, 1);

	ft_putendl_fd("\nft_itoa", 1);
	// printf("%s\n", ft_itoa(2147483647));
	TEST_FUNC(ft_strncmp(ft_itoa(2147483647), "2147483647", 12) == 0);
	// printf("%s\n", ft_itoa(-2147483648));
	TEST_FUNC(ft_strncmp(ft_itoa(-2147483648), "-2147483648", 12) == 0);
	// printf("%s\n", ft_itoa(0));
	TEST_FUNC(ft_strncmp(ft_itoa(0), "0", 12) == 0);
	// printf("%s\n", ft_itoa(-0));
	TEST_FUNC(ft_strncmp(ft_itoa(-0), "0", 12) == 0);

}
