/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:45:39 by ikhristi          #+#    #+#             */
/*   Updated: 2023/04/14 18:21:42 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	arg_is_number(char *arg)
{
	int	i;

	i = 0;
	if (is_sign(arg[i]) && arg[i + 1] != '\0')
		i++;
	while (ft_isdigit(arg[i]))
		i++;
	if (arg[i] != '\0' && !ft_isdigit(arg[i]))
		return (0);
	return (1);
}

static int	have_duplicates(char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		j = i + 1;
		while (arr[j])
		{
			if (long_atoi(arr[i]) == long_atoi(arr[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_input_check(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (!arg_is_number(arr[i]))
			return (0);
		i++;
	}
	if (have_duplicates(arr))
		return (0);
	return (1);
}
