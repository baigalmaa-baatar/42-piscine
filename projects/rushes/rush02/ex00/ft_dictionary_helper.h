/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictionary_helper.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbaatar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:55:59 by bbaatar           #+#    #+#             */
/*   Updated: 2021/02/21 15:56:01 by bbaatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICTIONARY_HELPER_H
# define FT_DICTIONARY_HELPER_H

void	ft_cleanup_dict(char **g_small_dict, char **g_big_dict);
char	*ft_get_value(char *line);
int		ft_is_small_number(char *line);
int		ft_is_big_number(char *line);

#endif
