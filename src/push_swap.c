/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:15:09 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/27 21:06:23 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	push_swap_check(t_stack **a, t_stack **b)
{
	int	stack_size;

	stack_size = ft_stack_size(a);
	if (stack_size == 1)
		return ;
	else if (stack_size == 2 && !ft_is_sorted_stack(a))
		swap_sa(a, 1);
	else if (stack_size == 3 && !ft_is_sorted_stack(a))
		small_sort(a)
	
}