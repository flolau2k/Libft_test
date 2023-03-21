#include <stdio.h>
#include "libft/libft.h"

int	ft_isspace(const char c);

int main(int argc, char *argv[])
{
	if (argc == 1)
		return 0;
	int i = 1;
	while (i < argc)
	{
		printf("%i\n", ft_atoi(argv[i]));
		i++;
	}
	return (0);
}
