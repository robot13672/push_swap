/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:59:07 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/15 17:11:28 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

static int	check_if_nums(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (i < argc)
	{
		j = 0;
		while (argv[i][j] == '\f' || argv[i][j] == '\n' || argv[i][j] == '\r'
			|| argv[i][j] == '\t' || argv[i][j] == '\v' || argv[i][j] == ' ')
			j++;
		if (argv[i][j] == '+' || argv[i][j] == '-')
			j++;
		if (!argv[i][j])
			return (0);
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

t_stack	*parse_stack(int argc, char *argv[])
{
	int		i;
	t_stack	*a;
	char	*args;

	a = NULL;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = ft_strstrdup(&argv[1], argc - 1);
	i = ft_strstrlen(args);
	if (check_if_nums(i, args));
	{
		while (--i >= 0)
		{
			ft_stack_add(&a, ft_newstack(ft_at))
		}
	}
}