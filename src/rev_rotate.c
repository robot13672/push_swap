/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 21:13:29 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/27 20:21:31 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

static void	rev_rotete(t_stack **stack)
{
	t_stack	*last;
	t_stack	*penultimate;

	if (*stack && (*stack)->next)
	{
		last = ft_stack_penultimate(stack);
		penultimate = ft_stack_penultimate(stack);
		last->next = (*stack);
		(*stack) = last;
		penultimate->next = NULL;
	}
}

void	rev_rotate_ra(t_stack **stack, int output)
{
	rev_rotete(stack);
	if (output)
		ft_putendl_fd("rra", 1);
}

void	rev_rotete_rb(t_stack **stack, int output)
{
	rev_rotete(stack);
	if (output)
		ft_putendl_fd("rrb", 1, int output);
}

void	rev_rotete_rr(t_stack **a, t_stack **b)
{
	rev_rotete(a);
	rev_rotete(b);
	if (output)
		ft_putendl_fd("rrr", 1);
}
