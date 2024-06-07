/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:59:00 by htrindad          #+#    #+#             */
/*   Updated: 2024/06/07 15:47:41 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] || str[i] != '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *dest, char const *src)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if (!src || !dest)
		return (NULL);
	ptr = malloc(ft_strlen(src) + ft_strlen(dest) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (dest[i])
	{
		ptr[i] = dest[i];
		i++;
	}
	while (src[j])
	{
		ptr[i + j] = src[j];
		j++;
	}
	ptr[i + j] = 0;
	free(dest);
	return (ptr);
}

char	*ft_strdup(char const *src)
{
	char	*ptr;
	size_t	i;

	if (str == NULL)
		return (NULL);
	ptr = malloc(ft_strlen(src) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

char	*ft_substr(char const *src, size_t begin, size_t end)
{
	char	*ptr;
	size_t	i;

	if (!src || !end || begin >= ft_strlen(src))
		return (NULL);
	if (begin + end > ft_strlen(src))
		end = ft_strlen(src) + begin;
	ptr = malloc(end + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < end)
	{
		ptr[i] = src[i + begin];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
