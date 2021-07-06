#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
