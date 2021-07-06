#include <unistd.h>

void	ft_putchars(char *chars, int size)
{
	int				i;
	unsigned char	uch;

	i = 0;
	while (i < size)
	{
		uch = chars[i];
		if (32 <= uch && uch <= 127)
			write(1, &uch, 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	ft_puthex(char ch)
{
	unsigned char	uch;
	char			temp[1];

	uch = ch;
	if (uch / 16 < 10)
	{
		temp[0] = uch / 16 + '0';
		ft_putchars(temp, 1);
	}
	else
	{
		temp[0] = uch / 16 - 10 + 'a';
		ft_putchars(temp, 1);
	}
	if (uch % 16 < 10)
	{
		temp[0] = uch % 16 + '0';
		ft_putchars(temp, 1);
	}
	else
	{
		temp[0] = uch % 16 - 10 + 'a';
		ft_putchars(temp, 1);
	}
}

void	ft_putaddr(unsigned long addr, int depth)
{
	if (depth == 8)
		return ;
	ft_putaddr(addr / 256, depth + 1);
	ft_puthex(addr % 256);
}

void	ft_print_memory_line(char *addr, unsigned int size)
{
	unsigned int i;

	ft_putaddr((unsigned long)addr, 0);
	ft_putchars(":", 1);
	i = 0;
	while (i < size)
	{
		if (i % 2 == 0)
			ft_putchars(" ", 1);
		ft_puthex(addr[i]);
		i++;
	}
	while (i < 16)
	{
		if (i % 2 == 0)
			ft_putchars(" ", 1);
		ft_putchars("  ", 2);
		i++;
	}
	ft_putchars(" ", 1);
	ft_putchars(addr, size);
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size / 16)
	{
		ft_print_memory_line(&addr[i * 16], 16);
		i++;
	}
	if (size % 16 != 0)
		ft_print_memory_line(&addr[i * 16], size % 16);
	return (addr);
}
