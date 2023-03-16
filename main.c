/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:12:50 by flauer            #+#    #+#             */
/*   Updated: 2023/03/16 14:00:05 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

#define TEST_FUNC(CONDITION)	if(CONDITION) \
									ft_putstr_fd("passed\n", 1); \
								else \
									ft_putstr_fd("\033[1;31mfailed\033[0m\n", 1);

void	ft_putstrn_fd(char *s, int fd, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

void	put_bytes(char *buf, size_t len)
{
	unsigned int	i;

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

	ft_putstr_fd("\nft_memcmp\n", 1);
	TEST_FUNC(ft_memcmp("hallo123", "hallo123", 8) == 0);
	TEST_FUNC(ft_memcmp("hallo123", "hallo123", 30) == 0);
	TEST_FUNC(ft_memcmp("hallo123", "hallo", 5) == 0);
	TEST_FUNC(ft_memcmp("hallo123", "hallo234", 8) < 0);
	TEST_FUNC(ft_memcmp("1234", "12345", 5) < 0);
}
