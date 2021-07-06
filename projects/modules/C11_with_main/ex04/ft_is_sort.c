
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i + 1], tab[i]) < 0)
			return (0);
		i++;
	}
	return (1);
}
