/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:08:50 by ikhristi          #+#    #+#             */
/*   Updated: 2023/04/14 18:08:27 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	push(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (*stack_b == NULL)
		return ;
	tmp = (*stack_b)->next;
	(*stack_b)->next = *stack_a;
	*stack_a = *stack_b;
	*stack_b = tmp;
}

void	push_pa(t_stack **a, t_stack **b, int output)
{
	push(a, b);
	if (output)
		ft_putendl_fd("pa", 1);
}

void	push_pb(t_stack **a, t_stack **b, int output)
{
	push(b, a);
	if (output)
		ft_putendl_fd("pb", 1);
}
