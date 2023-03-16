/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flauer <flauer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:12:50 by flauer            #+#    #+#             */
/*   Updated: 2023/03/15 12:51:07 by flauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define TEST_FUNC(CONDITION) CONDITION ? ft_putstr_fd("passed\n", 1) : ft_putstr_fd("---failed---\n", 1);

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
}
