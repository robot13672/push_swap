/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhristi <ikhristi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:27:40 by ikhristi          #+#    #+#             */
/*   Updated: 2023/03/21 17:50:54 by ikhristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

int	ft_check_lowest_rotations(t_stack *a, int value)
{
	t_stack	*cur;
	int		i;

	cur = a;
	i = 0;
	while (cur && cur->value != value)
	{
		cur = cur->next;
		i++;
	}
	if (ft_stack_size(a) - i < i)
		return (i - ft_stack_size(a));
	return (i);
}

void	rotate_on_top(t_stack **a, int value)
{
	int	rotates;

	rotates = ft_check_lowest_rotations(*a, value);
	while (rotates != 0)
	{
		if (rotates > 0)
		{
			ft_stack_rotate(a, 'a');
			rotates--;
		}
		else
		{
			ft_stack_reverse_rotate(a, 'a');
			rotates++;
		}
	}
}
