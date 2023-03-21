#include <stdio.h>
#include "libft/libft.h"

size_t	ft_num_substr(char const *s, char c);

int main(void)
{
	char test[] = ",,,,,,,,,";

	printf("%zu", ft_num_substr(test, ','));
	return (0);
}
