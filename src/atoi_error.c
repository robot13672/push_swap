/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:13:46 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/21 15:33:05 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

long	ft_atoi_long(const char *value)
{
	int		sign;
	int		i;
	long	res;

	i = 0;
	sign = 1;
	while (*(value + i) == '\f' || *(value + i) == '\n' || *(value + i) == '\r'
		|| *(value + i) == '\t' || *(value + i) == '\v' || *(value + i) == ' ')
		i++;
	if (*(value + i) == '+' || *(value + i) == '-')
	{
		if (*(value + i) == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(*(value + i)))
	{
		res = res * 10 + *(value + i) - '0';
		i++;
	}
	return ((long)(res * sign));
}

int	ft_atoi_error(t_stack **a, const char value)
{
	long	res;

	res = ft_atoi_long(value);
	if (res > INT_MAX && res < INT_MIN)
	{
		throw_error(a);
		return (0);
	}
	else
		return ((int)res);
}
