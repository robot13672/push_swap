/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:33:34 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/21 17:14:53 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	ft_stack_sort_tree(t_stack **a)
{
	t_stack	*last;

	last = ft_stack_last(*a);
	if ((*a)->value > ((*a)->next)->value && (*a)->value > last->value)
	{
		ft_stack_rotate(a, 'a');
		if ((*a)->value > ((*a)->next)->value)
			ft_stack_swap(a, 'a');
	}
	else if ((*a)->value < ((*a)->next)->value && (*a)->value < last->value)
	{
		if (((*a)->next)->value > last->value)
		{
			ft_stack_reverse_rotate(a, 'a');
			ft_stack_swap(a, 'a');
		}
	}
	else
	{
		if ((*a)->value > ((*a)->next)->value)
			ft_stack_swap(a, 'a');
		else
			ft_stack_reverse_rotate(a, 'a');
	}
}

void	ft_push_swap(t_stack **a)
{
	t_stack		*b;

	b = NULL;
	if (ft_stack_size(*a) < 2)
	{
		if ((*a) && (*a)->next && (*a)->value > ((*a)->next)->value)
			ft_stack_swap(a, 'a');
		return ;
	}
	else if (ft_stack_size(*a) == 3)
		ft_stack_sort_tree(a);
	else
	{
		if (ft_stack_size(*a) > 6)
			

	}
}