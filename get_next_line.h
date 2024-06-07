/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:03:13 by htrindad          #+#    #+#             */
/*   Updated: 2024/06/07 15:53:14 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

size_t	ft_strlen(char const *str);
char	*ft_strjoin(char *dest, char const *src);
char	*ft_strdup(char const *str);
char	*ft_substr(char const *src, size_t begin, size_t end);
char	*ft_finish(char *nl, char *prev_buf);

#endif
