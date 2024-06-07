/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:13:29 by htrindad          #+#    #+#             */
/*   Updated: 2024/06/07 15:47:56 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buf[BUFFER_SIZE + 1];
	size_t		chars_r;
	size_t		last_c;
	char		*c_ret;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	chars_r = 1;
	c_ret = NULL;
	while (chars_r)
	{
		chars_r = read(fd, buf, BUFFER_SIZE);
		if (chars_r < 1)
			return (NULL);
		buf[chars_r] = 0;
		if (c_ret == NULL)
			c_ret = ft_strdup(buf);
		else
			c_ret = ft_strjoin(c_ret, buf);
		if (c_ret == NULL)
			return (NULL);
	}
	
	return (c_ret);
}
