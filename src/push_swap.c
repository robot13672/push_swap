/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:15:09 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/29 13:11:57 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	push_to_b(t_stack **a, t_stack **b)
{
	t_stack	*buf
}

void	push_swap(t_stack **a, t_stack **b)
{
	int rotates;

	push_pb(a, b, 1);
	push_pb(a, b, 1);
	
}

void	push_swap_check(t_stack **a, t_stack **b)
{
	int	stack_size;

	stack_size = ft_stack_size(a);
	if (stack_size == 1)
		return ;
	else if (stack_size == 2 && !ft_is_sorted_stack(a))
		swap_sa(a, 1);
	else if (stack_size == 3 && !ft_is_sorted_stack(a))
		small_sort(a);
	else if (stack_size <= 5 && !ft_is_sorted_stack(a))
		little_sort(a, b);
	else if (stack_size > 5 && !ft_is_sorted_stack(a))
		
}