
int		ft_tab_size(char **tab)
{
	int size;

	size = 0;
	while (tab[size] != 0)
		size++;
	return (size);
}

void	ft_swap(char **tab, int i, int j)
{
	char *temp;

	temp = tab[i];
	tab[i] = tab[j];
	tab[j] = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int j;
	int min;
	int tab_size;

	tab_size = ft_tab_size(tab);
	i = 0;
	while (i < tab_size)
	{
		min = i;
		j = i + 1;
		while (j < tab_size)
		{
			if (0 < cmp(tab[min], tab[j]))
				min = j;
			j++;
		}
		ft_swap(tab, i, min);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	return (ft_advanced_sort_string_tab(tab, &ft_strcmp));
}
