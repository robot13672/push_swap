/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_cost_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:59:59 by ikhristi          #+#    #+#             */
/*   Updated: 2023/04/17 18:29:04 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//find best rotation
int	ft_check_lowest_rotations(t_stack *a, int value)
{
	t_stack	*cur;
	size_t	i;

	cur = a;
	i = 0;
	while (cur && cur->value != value)
	{
		cur = cur->next;
		i++;
	}
	if (ft_stack_size(a) - i < i)
		return (i - ft_stack_size(a));
	return (i);
}

//Looks for the smallest element that is greater than the given one.
int	ft_find_place(t_stack *a, int value)
{
	t_stack	*cur;
	int		low;
	int		is_max;

	is_max = 1;
	cur = a;
	low = INT_MAX;
	while (cur)
	{
		if (cur->value > value && cur->value <= low)
		{
			is_max = 0;
			low = cur->value;
		}
		cur = cur->next;
	}
	if (is_max)
		low = ft_stack_lowest_value(a);
	return (ft_check_lowest_rotations(a, low));
}
