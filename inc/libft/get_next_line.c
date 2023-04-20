/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 15:43:58 by ikhristi          #+#    #+#             */
/*   Updated: 2023/01/22 15:43:58 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char *str)
{
	free(str);
	return (NULL);
}

char	*ft_readrest(int fd, char *rest)
{
	char	*buf;
	int		i;

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buf == NULL)
		return (NULL);
	i = 1;
	while (!ft_strchr_gnl(rest, '\n') && i != 0)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i == -1)
		{
			free(rest);
			free(buf);
			return (NULL);
		}
		buf[i] = '\0';
		rest = ft_strjoin_gnl(rest, buf);
	}
	free(buf);
	return (rest);
}

char	*get_next_line(int fd)
{
	char		*ret;
	static char	*rest;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	rest = ft_readrest(fd, rest);
	if (rest == NULL)
		return (NULL);
	ret = ft_line(rest);
	rest = ft_rest(rest);
	return (ret);
}
