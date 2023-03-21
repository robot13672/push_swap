/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:22:00 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/15 17:31:34 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	throw_error(t_list **stack)
{
	ft_putstr_fd("Error\n", 2);
	ft_clear_stack(stack);
	exit (0);
}

char	**ft_strstrdup(char **str, int size)
{
	char	**res;
	int		i;

	res = (char **)ft_calloc(sizeof(char *), size + 1);
	i = 0;
	while (i < size)
	{
		res[i] = ft_strdup(str[i]);
		i++;
	}
	res[i] = NULL;
	return (res);
}

size_t	ft_strstrlen(char *args)
{
	size_t	i;

	i = 0;
	while (*(args + i))
		i++;
	return (i);
}

void	ft_strstrfree(char **str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		free(str[i]);
		i++;
	}
	free(str);
}