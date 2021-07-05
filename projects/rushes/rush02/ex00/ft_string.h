/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 17:08:56 by engo              #+#    #+#             */
/*   Updated: 2021/02/21 17:09:06 by engo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

typedef struct	s_t_string{
	int		size;
	int		capacity;
	char	*data;
}				t_string;

t_string		ft_string_new();
void			ft_string_delete(t_string *str);
void			ft_string_append_char(t_string *str, char ch);
void			ft_string_append_str(t_string *str, char *chs);
int				ft_strlen(char *str);

#endif
