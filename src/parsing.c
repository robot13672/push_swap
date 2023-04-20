/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:56:17 by ikhristi          #+#    #+#             */
/*   Updated: 2023/04/20 15:04:59 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stack	*parse_arr(int argc, char **argv)
{
	t_stack		*new;
	int			i;
	long int	nb;

	i = 1;
	if (!ft_input_check(argv + 1))
		throw_error("Error");
	while (i < argc)
	{
		nb = long_atoi(argv[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			throw_error("Error");
		else if (i == 1)
			new = ft_newstack((int)nb);
		else
			ft_stack_add(&new, ft_newstack((int)nb));
		i++;
	}
	return (new);
}

static void	free_split(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
	{
		free(numbers[i]);
		i++;
	}
	free(numbers);
}

t_stack	*parse_str(char *str)
{
	t_stack		*new;
	char		**numbers;
	int			i;
	long int	nb;

	numbers = ft_split(str, ' ');
	if (!ft_input_check(numbers))
		throw_error("Error");
	i = 0;
	while (numbers[i])
	{
		nb = long_atoi(numbers[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			throw_error("Error");
		if (i == 0)
			new = ft_newstack((int)nb);
		else
			ft_stack_add(&new, ft_newstack((int)nb));
		i++;
	}
	free_split(numbers);
	return (new);
}

long int	long_atoi(char *str)
{
	int		i;
	int		sign;
	long	nb;

	nb = 0;
	sign = 1;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (isdigit(str[i]))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
