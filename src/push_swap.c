/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 20:15:09 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/30 21:02:18 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void	push_to_b(t_stack **a, t_stack **b)
{
	t_stack	*buf;
	int		i;
	double	f;

	buf = *a;
	f = 0;
	while (buf)
	{
		f += ((double)buf->value / 1000);
		buf = buf->next;
	}
	i = (f * 1000) / ft_stack_size(a);
	while (ft_stack_size(a) > 3)
	{
		if ((*a)->value <= i)
		{
			push_pb(a, b, 1);
			rotate_rb(b, 1);
		}
		else
			push_pb(a, b, 1);
	}
}

void	push_back_sorted(t_stack **a, t_stack **b)
{
	t_transf_price	*prices;
	int				low;
	size_t			size;

	size = ft_stack_size(b);
	prices = (t_transf_price *)malloc(sizeof(t_transf_price) * size);
	while ((*b) != 0)
	{
		low = 
	}
}

void	push_swap(t_stack **a, t_stack **b)
{
	int	rotates;

	push_pb(a, b, 1);
	push_pb(a, b, 1);
	push_to_b(a, b);
	if (!ft_is_sorted_stack(a))
		small_sort(a);
	push_back_sorted(a, b);
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