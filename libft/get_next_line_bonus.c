/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortova <kfortova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:02:58 by kfortova          #+#    #+#             */
/*   Updated: 2023/07/18 17:47:13 by kfortova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_store(char *str)
{
	char	*rest;
	int		i;
	int		x;

	i = 0;
	x = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (0);
	}
	rest = (char *)malloc(ft_strlen(str) + 1 - i);
	if (!rest)
		return (0);
	i++;
	while (str[i])
		rest[x++] = str[i++];
	rest[x] = '\0';
	free(str);
	return (rest);
}

char	*ft_append(int fd, char *str)
{
	int		readen;
	char	*buffer;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (0);
	readen = 1;
	while (readen > 0 && !ft_strchr(str, '\n'))
	{
		readen = read(fd, buffer, BUFFER_SIZE);
		if (readen == -1)
		{
			free(buffer);
			return (0);
		}
		buffer[readen] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str[1024];

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	str[fd] = ft_append(fd, str[fd]);
	if (!str[fd])
		return (0);
	line = ft_get_line(str[fd]);
	str[fd] = ft_store(str[fd]);
	return (line);
}
