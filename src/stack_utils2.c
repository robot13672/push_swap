/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 23:17:33 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/21 18:11:16 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int	ft_stack_lowest_value(t_stack *stack)
{
	int	min;

	if (!stack)
		return (0);
	min = stack->value;
	while (stack)
	{
		if (stack->value < min)
			min = stack->next;
		stack = stack->next;
	}
	return (min);
}

void	ft_print_stack(t_stack *stack)
{
	while (stack)
	{
		ft_printf("%d ", stack->value);
		stack = stack->next;
	}
	ft_printf("\n");
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

void	ft_clear_stack(t_stack **stack)
{
	t_stack	*next;
	t_stack	*current;

	current = stack;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
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
