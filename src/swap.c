/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:30:59 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/27 20:20:11 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

static void	swap(t_stack *stack)
{
	int	tmp;

	if (stack && stack->next)
	{
		tmp = stack->value;
		stack->value = stack->next->value;
		stack->next->value = tmp;
	}
}

void	swap_sa(t_stack **stack, int output)
{
	swap(*stack);
	if (output)
		ft_putendl_fd("sa", 1);
}

void	swap_sb(t_stack **stack, int output)
{
	swap(*stack);
	if (output)
		ft_putendl_fd("sb", 1);
}

void	swap_ss(t_stack **a, t_stack **b, int output)
{
	swab(*a);
	swap(*b);
	if (output)
		ft_putendl_fd("ss", 1);
}
