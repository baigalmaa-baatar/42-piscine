/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:08:10 by engo              #+#    #+#             */
/*   Updated: 2021/07/06 16:17:58 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_file_size(char *filename)
{
	int		size;
	int		fd;
	char	ch;

	size = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (0 < read(fd, &ch, 1))
		size++;
	close(fd);
	return (size);
}

char	*ft_read_file(char *filename, int *size)
{
	int		fd;
	char	*content;

	*size = ft_file_size(filename);
	if (*size == -1)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	content = malloc(*size + 1);
	if (content == 0)
		return (0);
	read(fd, content, *size);
	close(fd);
	content[*size] = '\n';
	return (content);
}
