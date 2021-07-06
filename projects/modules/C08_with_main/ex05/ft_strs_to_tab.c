#include "ft_stock_str.h"
#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char			*ft_strdup(char *src)
{
	int		len_src;
	char		*dest;
	int		i;

	len_src = ft_strlen(src);
	dest = malloc(len_src + 1);
	if (src == 0)
		return (0);
	i = 0;
	while (i < len_src)
	{
		dest[i] = src[i];
		i++;
	}
	dest[len_src] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	struct s_stock_str	*new_av;

	new_av = (t_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!new_av)
	{
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		new_av[i].size = ft_strlen(av[i]);
		new_av[i].str = av[i];
		new_av[i].copy = ft_strdup(av[i]);
		i++;
	}
	new_av[i].size = 0;
	new_av[i].str = 0;
	new_av[i].copy = 0;
	return (new_av);
}
