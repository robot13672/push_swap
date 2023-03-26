/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:31:53 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/26 21:10:23 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

static void	rotate(t_stack **stack)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *stack;
	*stack = (*stack)->next;
	last = ft_stack_last(*stack);
	tmp->next = NULL;
	last->next = tmp;
}

void	rotate_ra(t_stack **stack)
{
	rotate(stack);
	ft_putendl_fd("ra", 1);
}

void	rotate_rb(t_stack **stack)
{
	rotate(stack);
	ft_putendl_fd("rb", 1);
}

void	rotate_rr(t_stack **a, t_stack *b)
{
	rotate(a);
	rotate(b);
	ft_putendl_fd("rr", 1);
}