/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:07:52 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/30 22:03:47 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	calculate_value(int a, int b)
{
	if ((a > 0 && b < 0) || (a < 0 && b > 0))
		return (ft_abs(a) + ft_abs(b));
	else if (ft_abs(a) > ft_abs(b))
		return (ft_abs(a));
	else
		return (ft_abs(b));
}

int	check_rotate_values(t_transf_price *prices, t_stack *a, t_stack *b)
{
	int		i;
	int		low;
	t_stack	*cur;

	i = 0;
	cur = b;
	low = 0;
	while (cur)
	{
		prices[i].moves[0] = ft_find_place(a, cur->value);
		prices[i].moves[1] = ft_check_lowest_rotations(b, cur->value);
		prices[i].value = \
			calculate_value(prices[i].moves[0], prices[i].moves[1]);
		if (prices[i].value < prices[low].value)
			low = i;
		i++;
		cur = cur->next;
	}
	return (low);
}
