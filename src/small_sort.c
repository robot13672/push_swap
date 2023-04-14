/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:27:01 by ikhristi          #+#    #+#             */
/*   Updated: 2023/04/14 18:41:41 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	small_sort(t_stack **s)
{
	if ((*s)->value < (*s)->next->value && \
	(*s)->value > (*s)->next->next->value)
		rev_rotate_ra(s, 1);
	else if ((*s)->value < (*s)->next->value &&\
	(*s)->value < (*s)->next->next->value)
		{
			rev_rotate_ra(s, 1);
			swap_sa(s, 1);
		}
	else if ((*s)->value > (*s)->next->value && \
	(*s)->next->value > (*s)->next->next->value)
		rev_rotate_ra(s, 1);
	else if ((*s)->value > (*s)->next->value && \
	(*s)->value < (*s)->next->next->value)
		swap_sa(s, 1);
	else if ((*s)->value > (*s)->next->value && \
	(*s)->value > (*s)->next->next->value)
		rotate_ra(s, 1);
}

void	little_sort(t_stack **a, t_stack **b)
{
	if (ft_stack_size(*a))
		push_pb(a, b, 1);
	push_pb(a, b, 1);
	if (!ft_is_sorted_stack(*a))
		small_sort(a);
	if (ft_stack_size(*b) && !ft_is_sorted_stack(*b))
		swap_sb(b, 1);
	while ((*b) != NULL)
	{
		if ((*b)->value < (*a)->value)
			push_pa(a, b, 1);
		else if ((*b)->value > ft_stack_highest_value(*a))
		{
			while ((*a)->value != ft_stack_lowest_value(*a))
				rotate_ra(a, 1);
			push_pa(a, b, 1);
		}
		else
			rotate_ra(a, 1);
	}
	while (!ft_is_sorted_stack(*a))
		rotate_ra(a, 1);
}
