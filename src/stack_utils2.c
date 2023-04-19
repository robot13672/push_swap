/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:58:19 by ikhristi          #+#    #+#             */
/*   Updated: 2023/04/17 18:29:54 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_stack_lowest_value(t_stack *stack)
{
	int	min;

	if (!stack)
		return (0);
	min = stack->value;
	while (stack != NULL)
	{
		if (stack->value < min)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}

int	ft_stack_highest_value(t_stack *stack)
{
	int	max;

	if (!stack)
		return (0);
	max = stack->value;
	while (stack != NULL)
	{
		if (stack->value > max)
			max = stack->value;
		stack = stack->next;
	}
	return (max);
}

int	*ft_stack_to_arr(t_stack *stack)
{
	int	*arr;
	int	i;

	arr = (int *)calloc(sizeof(int), ft_stack_size(stack));
	i = 0;
	while (stack)
	{
		arr[i] = stack->value;
		stack = stack->next;
		i++;
	}
	return (arr);
}

int	ft_is_sorted_stack(t_stack *stack)
{
	t_stack	*prev;

	prev = stack;
	stack = stack->next;
	while (stack)
	{
		if (prev->value > stack->value)
			return (0);
		prev = stack;
		stack = stack->next;
	}
	return (1);
}
